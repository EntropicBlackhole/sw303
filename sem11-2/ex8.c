#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int val;
  struct node *left, *right;
} node;

node* insert(node** p, int val) {
  if (!*p) {
    *p = malloc(sizeof(node));
    (*p)->val = val;
    (*p)->left = (*p)->right = 0;
    return *p;
  }
  if (val < (*p)->val) {
    (*p)->left = insert(&((*p)->left), val);
    return (*p)->left;
  }
  (*p)->right = insert(&((*p)->right), val);
  return (*p)->right;
}

int seek(node* p, int val) {
  if (!p) return 0;
  if (val == p->val) return 1;
  if (val < p->val) return seek(p->left, val);
  return seek(p->right, val);
}

void printTree(node* p) {
  if (!p) return;
  printTree(p->left);
  printf("%d\n", p->val);
  printTree(p->right);
}

int main() {
  node* tree = 0;

  insert(&tree, 15);
  insert(&tree, 12);
  insert(&tree, 7);

  printTree(tree);

  int val;
  val = 10;

  if (seek(tree, val))
    printf("found %d\n", val);
  else
    printf("%d doesnt exist in the tree\n", val);

  val = 12;
  if (seek(tree, val))
    printf("found %d\n", val);
  else
    printf("%d doesnt exist in the tree\n", val);

  val = 8;
  if (seek(tree, val))
    printf("found %d\n", val);
  else
    printf("%d doesnt exist in the tree\n", val);

  return 0;
}

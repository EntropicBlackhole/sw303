#ifndef RAIZ_DIGITAL_H
#define RAIZ_DIGITAL_H

/*
 *  raiz_digital.h
 *  Módulo de cálculo de raíz digital de un entero positivo. Sin arreglos, ni punteros.
 */

/*
 *  @brief Suma los digitnos de n (en base 10)
 *  @param n Entero no negativo.
 *  @return Suma de sus digitos.
 */
int sum_digits(int n);

/*
 *  @brief Calcula la raiz digital de n aplicando suma_digital iterativamente.
 *  @param n Entero no negativo.
 *  @return Digito entre 0 y 9.
 */
int digital_root(int n);

/*
 *  @brief Imprime la traza del colapso de n por stdout.
 *  @param n Entero no negativo.
 */
void print_progress(int n);

#endif
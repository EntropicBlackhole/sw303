## 2.1.2:
- ¿Por qué n sigue siendo 10 en main?
  porque al momento de pasar `x` a `incrementar`, solamente le estamos otorgando el valor, y puede editar ese valor localmente pero no hara ningun cambio afuera de la funcion
- ¿Cómo se resolvería sin usar punteros?
  tenemos dos opciones:
    1. convertimos `incrementar` en una funcion que retorna un int, y asignamos `n = incrementar(n)` donde `incrementar(int x)` consiste en declarar `int y = x + 1;` y retornar `y`
    2. convertir `n` en una variable global (no es bueno hacerlo) y al estar fuera del scope interno de `main` y de `incrementar`, ambos lo podran leer y editar, de esa manera le sumamos 1 a n

## 2.1.3:
- Predecir la salida de cada uno
  A: 
    al volver a declarar `contador` dentro de la funcion, la funcion ignora la variable global con el mismo nombre, por ende todo cambio a esa variable local es local. la preddicion siendo que `incrementar_local()` funcionalmente no hara nada, solamente creara una variable, la incrementa y muere, `contador` como variable global seguira siendo 0 (si `incrementar_local()` tuviera a `contador` como `static`, entonces el valor se conservaria atraves de cada llamada pero seguiria siendo local, funcionalmente no haciendo nada), se imprimira `global contador = 0`
  B:
    funciona como deberia, `incrementar_global()` va incrementar la variable global `contador` en 1, al llamarse 3 veces, `contador` llegara al prinf con un valor de `3`, se imprimira: `global contador = 3`
- Compilar y verificar. ¿Sorpresa?
  A: no hubo sorpresa, fue lo que haria el programa por el hecho de redeclarar `contador` y tambien reinicializarlo en 0
  B: tampoco hubo sorpresa, el programa agarro la variable global y la actualizo como deberia
-  ¿Por qué las variables globales son una mala práctica en Ingeniería de Software? Mencionar al menos tres razones (acoplamiento, dificultad de testeo, condiciones de carrera en concurrencia)
  1. acoplamiento: al tener diversas funciones llamando, leyendo y modificando variables globales, como que se enlazan, y al cambiar no fundamentalmente una funcion, puedes afectar otra completamente distinta que depende de la misma variable
  2. testeo: por el caso de acoplamiento, se vuelve dificil testear y encontrar bugs respecto a una variable global si multiples funciones la usan, ya que al estar acopladas, dependen de si, esto abre muchas posibilidades para el motivo de un bug, complicando el testeo
  3. race conditions: cuando se tienen varios hilos, o se tiene procesos asincronos se puede leer una variable desde una funcion A, editarla, leerla en una funcion B (aun sin editar de A), A la guarda (A y B tienen distintos conceptos en memoria de la variable), y B lo edita, y lo guarda, sobreescribiendo lo de A. 
1. ¿Por qué el nombre del archivo es `libraizdig.a`, pero el flag es `-lraizdig`? ¿Qué convención sigue?
    Se sigue la convención de librerías C, donde el nombre del archivo es `lib***.a`, y la flag para vincularla es `-l***`.

2. Cuál es la diferencia entre una librería estática (`.a`) y una dinámica (`.so`/`.dll`)?
    La librería estática se compila junto a la aplicación, por lo que **pesa más**, y se utiliza durante la compilación, mientras que la librería dinámica sólo extrae el código cuando se requiere, sin embargo, espera que el archivo de la librería (`.dll`) **esté en la máquina** durante la ejecución.

3. ¿Por qué importa el orden de los argumentos en `gcc`?
    El compilador `gcc` espera que el primer argumento sea el código a compilar. Anexar la librería primero es un comportamiento inesperado y devuelve un error.

4. ¿Qué hace `nm` con el archivo `.a`?
    Identifica los archivos `.o` empaquetados y muestra su código en **Assembly**. Podemos identificar los símbolos `T` como las funciones que definimos y los símbolos `U` como los símbolos importados de otras librerías (`<stdio.h>`).
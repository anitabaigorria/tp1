# tp1

## Punto 2b
> ¿Por qué es conveniente incluirlo? 

Porque evita subir archivos pesados o innecesarios que genera el compilador, como los .exe, .obj o .tds, o que se suban configuraciones locales de mis VScode que podrían no ser compatibles con la computadora de otra persona, manteniendo el repositorio liviano solo con el código fuente.

#

> ¿Cuándo se debe hacer?

Lo ideal es hacerlo en el Tiempo de Diseño, apenas se crea o clona el repositorio y antes de hacer el primer ***git commit***

#

> ¿Cómo configuraría el archivo .gitignore?

Creo el archivo con el nombre exacto *'.gitignore'*, lo abro desde cualquier editor (como VScode) y escribo los nombres o patrones de los archivos a ignorar, uno por línea.

#

## Punto 3
> Sobre el código misterioso: Explique qué operación matemática o lógica realiza el código y justifique los nuevos nombres descriptivos que eligió. 

El codigo a partir de un numero ingresado por el usuario lo invierte, lo divide a la mitad y finalmente suma los digitos resultantes que la componen, esto lo hace a través de funciones, por lo que les puse un nombre adecuado dependiendo de la acción que realizaba, además de renombrar la variable _dato_secreto_ por _num_.
   * **f_alpha() =>** ***invertir_num()***: es la función que invierte el número ingresado.
   * **f_beta() =>** ***calcular_mitad()***: es la función que divide el número ingresado a la mitad.
   * **f_gamma() =>** ***sumar_digitos()***: es la función que suma los digitos que componen el numero final procesado por las anteriores funciones.

#

> Sobre el código sin funcionar: Haga una lista detallando los errores específicos que encontró (sintaxis, scanf, lógica de punteros) y explique cómo los solucionó. 

* **LÍNEA 12:** ***Error de sintaxis***, faltaba el '&' dentro de parámetro 'valor1' del scanf()
* **LÍNEA 17:** ***Error de sintaxis***, faltaba un ';' al final de la misma
* **LÍNEA 23:** ***Error de sintaxis****, faltaba un ';' al final de la misma
* **FUNCIÓN 'duplicar_numero()':** ***Error de lógica***, hace pasaje por valor y no retorna nada, por lo que la variable del main() 'valor1' nunca se duplica, lo solucionamos enviándole por referencia la ubicacion de 'valor1' desde el main() a través de un puntero para modificarla.

#

## Punto 4c
> Revise los archivos subidos en su repositorio de github. ¿Qué archivos vé?¿Cuál cree que no hace falta que esté? 

Veo tanto el código fuente 'tp1_1.c' como el ejecutable que genera el compilador 'tp1_1.exe', el archivo innecesario es el ejecutable

#

## Punto 4g
> Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4?¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md  

Esto sucede porque un puntero es una variable que almacena la dirección de memoria de otra variable. Por lo tanto, el "valor" que guarda el puntero (punto 2) coincide exactamente con la ubicación física de la variable a la que está apuntando (punto 3). En el punto 4 se obtiene la dirección de memoria del propio puntero. Como el puntero es una variable más del programa, el sistema operativo debe asignarle su propio espacio físico en el Stack para que pueda existir y guardar datos. Y no es igual a los anteriores, aunque el puntero almacene la dirección de otra variable, el mismo reside en una ubicación distinta de la memoria.
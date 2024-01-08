ft_printf 
En este proyecto recrearemos desde 0 la funcion printf.

Indice
Que es ft_printf?
Que utilizamos?
Como funciona?
Como utilizamos la libreria?
Que es ft_printf?
ft_printf es un proyecto de 42 donde recreamos el funcionamiento de printf. En nuestro ft_printf puedes usar las siguientes conversiones:

Conversión	Descripción
%c	Imprime un solo carácter.
%s	Imprime una string (como se define por defecto en C).
%p	El puntero void * dado como argumento se imprime en formato hexadecimal.
%d	Imprime un número decimal (base 10).
%i	Imprime un entero en base 10.
%u	Imprime un número decimal (base 10) sin signo.
%x	Imprime un número hexadecimal (base 16) en minúsculas.
%X	Imprime un número hexadecimal (base 16) en mayúsculas.
%%	Imprime el símbolo del porcentaje.
Que utilizamos?
En nuestro ft_printf tenemos solo las siguentes funciones de librerias externas autorizadas:

Función	Descripción
malloc	Solicitar un bloque de memoria del tamaño suministrado como parámetro.
free	Desasigna un bloque de memoria que se había asignado previamente mediante una llamada.
write	Hace que los bytes que indiques del buffer sean escritos en el file descriptor seleccionado.
va_start	Permite el acceso a los argumentos de la función variada.
va_arg	Accede al siguiente argumento de la función variada.
va_copy	Hace una copia de los argumentos de la función variádica.
va_end	Finaliza el recorrido de los argumentos de la función variada.
Como funciona?
La meta es crear una libreria que contenga todo nuestro codigo para poder utilizarlo en futuros proyectos llamado: libftprintf.a

Para crear esta libreria seguimos los siguientes pasos:

git clone https://github.com/gjmacias/ft_printf
cd ft_printf
make
Al revisar el directorio, en alguna parte encontraras la libreria: libftprintf.a

Como utilizamos la libreria?
Para utilizarlo primero debes de tener la libreria: libftprintf.a. Luego debes añadirlo en el compilador, primero la ruta de libftprintf.a y luego el nombre de la libreria

gcc archivos.c -L<ruta de libftprintf.a> -lftprintf

-L tomara la ubicacion de la libreria
-l tomara el nombre de la libreria. en este caso seran los caracteres que vegan despues de lib de tu libreria.

y eso seria todo!

Quizás pueda interesarte!

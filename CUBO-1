#include <stdio.h>

/* cubo 1.
el programa calcula el cubo de los 10 primeros numeros naturales con la
ayuda de una funcion. En la solicitud del problemas se utilizan una variable
global, aunque esto, como veremos mas adelante no es muy recomendable. */

int cubo(void);
int I;

void main(void)
{
int cub;
for (I = 1; I <= 10; I++)
{
  cub = cubo();   /*llamada ala funcion cubo. */
  printf("\nEl cubo de %d es:  %d" , I, cub);
}
}

int cubo(void)   /*declaracion de la funcion. */
/* La funcion calcula el cubo de la variable global I. */
{
return (I*I*I);
}

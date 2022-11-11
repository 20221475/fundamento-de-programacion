#include <stdio.h>

/*cubo-2.
el programa calcula el cubo de los 10 primero numero naturales con la ayuda de una funcion. */

 int cubo(void);      /*prototipo de funcion*/
 int I;               /*variable global*/

 void main(void)
 {
     int CUB;
     for (I = 1; I <= 10; I++)
     {
         CUB = cubo();   /*llamada ala funcion cubo. */
         printf("\nEl cubo de %d es:  %d", I, CUB);
     }
 }

 int cubo(void)    /*declaracion de la funcion*/
 /*la funcion calcula el cubo de la variable local I. */
 {
     int I = 2;    /* variable local entera I con el mismo nombre que la variable global*/
     return(I*I*I);
 }

#include <stdio.h>
#include <math.h>

    /* funcion matematica
    el programa obtiene el resultado de una funcion

    OP y T: variable de un tipo entero
    RES: variable de tipo real. */


    void main (void)

{
    int OP, T;
    float RES;
    printf("ingrese el valor del calculo y el valor entero: ");
    scanf("%d %d" , &OP, &T);
    switch(OP)
    {
        case 1: RES = T / 5;
        break;
        case 2: RES = (T,T);
        /* la funcion pow es definida en la biblioteca math.h */
        break;
        case 3:
        case 4: RES = 6 * T /2;
        break;
        default: RES = 1;
        break;
    }
    printf("/Nresultado: %7.2f", RES);
    getchar();
    return 0;
}

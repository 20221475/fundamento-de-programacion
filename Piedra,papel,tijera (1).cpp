#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int seleccionUsuario;           //elijen entre piedra, papel o tijeras
    double seleccionComputadora;

    printf("PIEDRA, PAPEL O TIJERA\n\n");


    do{
        printf("Selecciona una opcion: 1.-Piedra   2.-Papel    3.-Tijera  ");
        scanf("%i", &seleccionUsuario);

        switch(seleccionUsuario){
        case 1: printf("\n¡Haz seleccionado Piedra!\n");
        break;
        case 2: printf("\n¡Haz seleccionado Papel!\n");
        break;
        case 3: printf("\n¡Haz seleccionado Tijeras!\n");
        break;
        default: printf("\nSolo puedes seleccionar un numero entre 1 y 3\n\n");
        break;
        }//fin switch
    }while(seleccionUsuario>3||seleccionUsuario<1); //Delimitamos a 3 las opciones del usuario

    //Hacemos que la computadora elija un número aleatorio entre uno y tres
    srand(time(NULL));
    seleccionComputadora= (rand()%2)+1;

    if(seleccionComputadora==1)
        printf("\n¡Tu ordenador ha seleccionado Piedra!\n");
    else if(seleccionComputadora==2)
        printf("\n¡Tu ordenador ha seleccionado Papel!\n");
    else if(seleccionComputadora==3)
        printf("\n¡Tu ordenador ha seleccionado Tijera!\n");

    //Determinamos al ganador de la contienda
    if(seleccionUsuario==2&&seleccionComputadora==1)
        printf("\nGanaste\n");
    else if(seleccionUsuario==3&&seleccionComputadora==2)
        printf("\nGanaste\n");
    else if(seleccionUsuario==1&&seleccionComputadora==3)
        printf("\nGanaste\n");
    else if(seleccionUsuario==seleccionComputadora)
        printf("\nEmpate\n");
    else
        printf("\nPerdiste\n");

    return 0;
}

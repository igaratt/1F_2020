//Incluyo la libreria de cabecera
#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
/*
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir  */


int main()
{
    //Declaro las variables iniciales
    int opcion;

    //Declaro el siguiente do que va a ejecutar todo el menu
    do{
        //Imprimo el menu de la calculadora
        printf("Calculadora\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Dividir\n");
        printf("4. Multiplicar\n");
        printf("5. Factorial\n");
        printf("6. Salir\n");

        //Capturo la opcion ingresada por el usuario
        fflush(stdin);
        printf("Ingrese su opcion: ");
        //Inicializo opcion en 10, asi cancela el input en caso de que no sea un entero o un numero valido
        opcion = 10;
        scanf("%d", &opcion);

        //Inicio el switch con todos los cases que llaman a las funciones declaradas previamente
        switch(opcion){
            case 1:
                f_sumar();
                break;
            case 2:
                f_restar();
                break;
            case 3:
                f_dividir();
                break;
            case 4:
                f_multiplicar();
                break;
            case 5:
                f_factorial();
                break;
            case 6:
                break;
            default:
                printf("Ingrese un numero valido\n");

        }
    }while(opcion!=6);//El while sale cuando la opcion es igual a 7

   return 0;
}

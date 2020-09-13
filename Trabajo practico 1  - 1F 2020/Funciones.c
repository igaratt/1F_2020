#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"


//Logica Funcion para sumar
    void f_sumar(){
    //Declaro las variables e imprimo en pantalla para que ingrese los valores
    int n1, n2;
    printf("Ingrese el primer numero: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    fflush(stdin);
    scanf("%d", &n2);

    //Hago un if para que solamente haga la operacion cuando ambos valores son positivos
    if ( n1 >= 0 && n2 >= 0 ){
        printf("El resultado de la suma de %d y %d es: %d \n", n1, n2 ,(n1+n2));
        }else{
        //Si no ingresa numeros positivos lo aviso, y vuelvo a ejecutar la funcion
        printf("Por favor recuerde ingresar valores positivos unicamente...");
        f_sumar();
        }

    return;
    }


//Logica Funcion para restar
void f_restar(){
    //Declaro las variables e imprimo en pantalla para que ingrese los valores
    int n1, n2;
    printf("Ingrese el primer numero: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    fflush(stdin);
    scanf("%d", &n2);

    //Hago un if para que solamente haga la operacion cuando ambos valores son positivos
    if ( n1 >= 0 && n2 >= 0 ){
        printf("El resultado de la resta de %d y %d es: %d \n", n1,n2 ,(n1-n2));
    }else{
        //Si no ingresa numeros positivos lo aviso, y vuelvo a ejecutar la funcion
        printf("Por favor recuerde ingresar valores positivos unicamente...");
        f_restar();
    }

    return;
}


//Logica Funcion para mutliplicar
void f_multiplicar(){

    //Declaro las variables e imprimo en pantalla para que ingrese los valores
    int n1, n2;
    printf("Ingrese el primer numero: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    fflush(stdin);
    scanf("%d", &n2);

    //Hago un if para que solamente haga la operacion cuando ambos valores son positivos
    if ( n1 >= 0 && n2 >= 0 ){
        ;printf("El resultado de la multiplicacion de %d y %d es: %d \n", n1, n2 ,(n1*n2));
    }else{
        //Si no ingresa numeros positivos lo aviso, y vuelvo a ejecutar la funcion
        printf("Por favor recuerde ingresar valores positivos unicamente...");
        f_multiplicar();
    }

    return;
}


//Logica Funcion para dividir
void f_dividir(){

    //Declaro las variables e imprimo en pantalla para que ingrese los valores
    int  n1, n2;
    float result;
    printf("Ingrese el primer numero: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    fflush(stdin);
    scanf("%d", &n2);

    //Hago un if para que solamente haga la operacion cuando ambos valores son positivos
    if ( n1 >= 0 && n2 > 0 ){
        //Casteo los valores de los enteros como flotantes, en caso de que el resultado tenga coma
        result = (float) n1 / (float) n2;
        printf("El resultado de la division de %d y %d es: %.2f \n", n1, n2, result);
    }else if( n2 == 0){
        //Si no ingresa numeros positivos lo aviso, y vuelvo a ejecutar la funcion
        printf("Por favor recuerde que no se puede dividir por cero...");
        f_dividir();
    }else{
        //Si no ingresa numeros positivos lo aviso, y vuelvo a ejecutar la funcion
        printf("Por favor recuerde ingresar valores positivos unicamente...");
        f_dividir();
    }

    return;
}


//Logica Funcion para calcular el factorial
void f_factorial(){
    //Declaro las variables e imprimo en pantalla para que ingrese los valores
    int n1;
    int n2;
    int i;
    int fact = 1;
    int fact2 = 1;

    printf("Introduzca No. para calcular el factorial ...: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Introduzca No.2 para calcular el factorial ...: ");
    fflush(stdin);
    scanf("%d", &n2);

    //Si no ingresa numeros positivos lo aviso, y vuelvo a ejecutar la funcion
    if (n1 < 0 && n2 < 0){
        printf("Por favor recuerde ingresar valores positivos unicamente...");
        f_factorial();
        }
    else {
        for (i = 1; i <= n1 && i <= n2 ; ++i) {
            fact *= i;
        }
        printf("El factorial de  %d = es %d\n", n1, fact);
    }
    if (n2 < 0){
        printf("Por favor recuerde ingresar valores positivos unicamente...");
        f_factorial();
        }
    else {
        for (i = 1; i <= n2; ++i) {
            fact2 *= i;
        }
        printf("El factorial de  %d = es %d\n", n2, fact2);
    }

    return;
}

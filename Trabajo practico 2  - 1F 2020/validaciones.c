#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validaciones.h"

int getInt(int* input,char message[],char errorMessage[], int lowestLimit, int highestLimit){
    int validationFlag=1;
    int isInteger=0;
    int numeroValidado=0;
    char auxNum[10]={'0'};

    printf("%s : ", message);
    scanf("%s", auxNum);
    isInteger=isInt(auxNum);

    if(isInteger){
        numeroValidado=atoi(auxNum);
        if(numeroValidado<lowestLimit || numeroValidado>highestLimit){
            printf("%s : ", errorMessage);
            scanf("%s", auxNum);
            validationFlag=-1;
        }else{
            *input=numeroValidado;
        }
    }else{
        printf("Ingrese solo numeros!\n");
        validationFlag=-1;
    }

    return validationFlag;
}

int isInt(char auxNum[]){
   int i=0;

   int validationFlag = 1;

   while(auxNum[i] != '\0'){
       if((atoi(auxNum))==0){
           validationFlag = 0;
       }
       i++;
   }
   return validationFlag;
}

int getFloat(float* input,char message[],char errorMessage[], float lowestLimit, float highestLimit){
    int validationFlag=1;
    int isFloating=0;
    int numeroValidado=0;
    char auxNum[10]={'0'};

    printf("%s : ", message);
    scanf("%s", auxNum);
    isFloating=isFloat(auxNum);

    if(isFloating){
        numeroValidado=atof(auxNum);
        if(numeroValidado<lowestLimit || numeroValidado>highestLimit){
            printf("%s : ", errorMessage);
            scanf("%s", auxNum);
            validationFlag=-1;
        }else{
            *input=numeroValidado;
        }
    }else{
        printf("Ingrese solo numeros!\n");
        validationFlag=-1;
    }
    return validationFlag;
}

int isFloat(char auxNum[]){
   int i=0;
   int validationFlag = 1;
   int contadorComas=0;

   while(auxNum[i] != '\0'){
       if(auxNum[i]<'0' || auxNum[i]>'9'){
           if(auxNum[i]=='.'){
               contadorComas++;
           }
       }
       if((atof(auxNum))==0 || contadorComas>1){
           validationFlag = 0;
       }
       i++;
   }
   return validationFlag;
}

int getChar(char* input,char message[],char errorMessage[], char lowestLimit, char highestLimit){
    printf("%s: ", message);
    fflush(stdin);
    scanf("%c", input);
    *input=toupper(*input);

    while (*input>highestLimit || *input<lowestLimit){
        printf("Reingrese %s: ", errorMessage);
        fflush(stdin);
        scanf("%c", input);
        *input=toupper(*input);
    }

    return 1;
}

int validateSex(char* input,char message[],char errorMessage[]){

    printf("%s: ", message);
    fflush(stdin);
    scanf("%c", input);
    *input=toupper(*input);

    while (*input!='F' && *input!='M'){
        printf("%s: ", errorMessage);
        fflush(stdin);
        scanf("%c", input);
        *input=toupper(*input);
    }

    return 1;
}

int getString(char* input,char message[],char errorMessage[], int lowestLimit, int highestLimit){
    char auxString[100]={"0"};
    int sizeString=0;
    int validationFlag=0;
    int isCharacter=0;

    printf("%s: ", message);
    fflush(stdin);
    scanf("%s", auxString);

    isCharacter=isChar(auxString);

    if(isCharacter){
      sizeString=strlen(auxString);
        if(sizeString>highestLimit || sizeString<lowestLimit){
            system("cls");
            printf("%s ", errorMessage);
            validationFlag=-1;

        }else{
            auxString[0]=toupper(auxString[0]);
            strcpy(input,auxString);
            validationFlag=1;
        }
    }
    else{
        printf("Ingrese solo letras!\n");
        validationFlag=-1;
    }

    return validationFlag;
}

int isChar(char auxString[]){
   int i=0;
   int validationFlag = 1;
   while(auxString[i] != '\0'){
       if((auxString[i] < 'a' || auxString[i] > 'z') && (auxString[i] < 'A' || auxString[i] > 'Z')){
           validationFlag = 0;
       }
       i++;
   }
   return validationFlag;
}

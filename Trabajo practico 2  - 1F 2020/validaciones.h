#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED

#endif // VALIDACIONES_H_INCLUDED

int isFloat(char auxNum[]);

int isInt(char auxNum[]);

int isChar(char auxString[]);

int getInt(int* input,char message[],char errorMessage[], int lowestLimit, int highestLimit);

int getFloat(float* input,char message[],char errorMessage[], float lowestLimit, float highestLimit);

int getChar(char* input,char message[],char errorMessage[], char lowestLimit, char highestLimit);

int getString(char* input,char message[],char errorMessage[], int lowestLimit, int highestLimit);

int validateSex(char* input,char message[],char eMessage[]);



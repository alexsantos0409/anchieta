/*
  Exemplo de programa para depuracao 
  Fa�a um programa que leia 2 numeros reais (float) e forne�a a 
  m�dia aritmetica;
*/

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char * args[])
{
    //declaracao de vari�veis
    float nota1, nota2, media;
    
    printf("\nDigita nota 1: ");
    scanf("%f", &nota1);
   
    printf("\nDigita nota 2: ");
    scanf("%f", &nota2);
    
    media = nota1 + nota2 / 2;
    
    printf("\nA media aritmetica e: %.2f", &media);
    
    system("PAUSE >> NULL");
    
    return 0;    
}


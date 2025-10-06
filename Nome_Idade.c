#include<stdio.h>

int main() {
    
    char nome[150];
    int idade;
    
    printf("Qual o seu nome?\n");
    scanf("%s" , &nome);
    
    printf("\nQual a sua idade?\n");
    scanf("%i" , &idade);
    
    printf("\nOlá %s, você tem %i anos.", nome, idade);
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[20];
    int idade;
    float altura;
    
    printf("Informe o seu nome: ");
    scanf("%s", &nome);
    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    
    printf("\nSeu nome é: %s.\n", nome);
    printf("Sua idade é: %i.\n", idade); 
    printf("Sua altura é: %.2f.\n", altura); 
}
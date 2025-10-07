#include<stdio.h>
#include <string.h>

int main() {
    
    char nome[150];
    int idade, opcao, cadastrado = 0;
    
    do {
        printf("\n---------------------------");
        printf("\n===== Menu Principal =====");
        printf("\n1 - Cadastrar usuário");
        printf("\n2 - Verificar usuário");
        printf("\n3 - Sair");
        printf("\n---------------------------");
    
        printf("\ninforme a opção desejada: ");
        scanf("%i" , &opcao);
    
        switch(opcao){
        
            case 1:
                printf("\nQual o seu nome?\n");
                scanf("%s" , &nome);
    
                printf("\nQual a sua idade?\n");
                scanf("%i" , &idade);
                
                cadastrado = 1;
    
                printf("\nUsuário cadastrado!\n");
                break;
            
            case 2:
                if (cadastrado){
                    
                    printf("\n===== Dados do Usuário =====\n");
                    
                    printf("\nNome: %s", nome);
                    printf("\nidade: %i", idade, "\n2");}
                    
                else{
                    printf("\nNenhum usuário encontrado!\n");}
                break;
                    
            case 3:
                printf("\nSaindo...");
                break;
                
            default:
                printf("\nOpção inválida! Tente novamente.");
        }
    } while (opcao != 3);
    
    return 0;
}
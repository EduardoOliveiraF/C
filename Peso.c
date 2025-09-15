#include<stdio.h>

int main() {
    
    int p1, p2, p3;
    
    printf("Informe seu peso: ");
    scanf("%i", &p1);
    printf("Informe o peso do fulano: ");
    scanf("%i", &p2);
    printf("Informe o peso do ciclano: ");
    scanf("%i", &p3);

    printf("\nSeu peso: %iKg", p1);
    printf("\nPeso fulano: %iKg", p2);
    printf("\nPeso ciclano: %iKg", p3);
}
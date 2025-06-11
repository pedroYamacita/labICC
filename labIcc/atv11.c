#include <stdio.h>

int main(){
    int valor=0;
    int *valor1=NULL, **valor2=NULL;
    scanf(" %d", &valor);
    printf("Valor inicial do tesouro: %d\n", valor);
    valor1= &valor;
    printf("Valor do tesouro usando mapa: %d\n", *valor1);
    printf("Valor do tesouro usando mapa depois de adicionarmos 10 moedas: %d\n", *valor1+=10);
    valor2=&valor1;
    printf("Valor do tesouro usando mapa para o mapa: %d\n", **valor2);
    printf("Valor do tesouro usando mapa para o mapa depois de adicionarmos 10 moedas: %d\n", **valor2+=10);

    return 0;
}
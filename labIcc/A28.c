#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    char nome[20];
    int contador=0;
    scanf("%[^\n]", nome);
    printf("%s", nome);
    FILE *arquivo = fopen(nome, "r");
    if(arquivo == NULL){
        printf("Deu ruim\n");
        return 1;
    }
    
    char caracter = fgetc(arquivo);
    while(caracter != EOF){
        contador++;
        caracter=fgetc(arquivo);
    }
    printf("%d", contador);
    fclose(arquivo);
    return 0;
}
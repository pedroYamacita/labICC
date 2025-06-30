#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    char telefone[10];
    char cidade[100];
}Pessoa;





int main(){
    Pessoa pessoas[1000];
    char nomeArquivo[100];
    
    scanf(" %s", nomeArquivo);
    
    FILE *arquivo=fopen(nomeArquivo, "r");
    
    if(arquivo==NULL){
        printf("Deu ruim\n");
        return 1;
    }
    int n=0;
    while(n<1000 && fscanf(arquivo," %99[^,] , %9[^,] , %99[^\n]", pessoas[n].nome, pessoas[n].telefone, pessoas[n].cidade)==3){
        n++;
    }
    fclose(arquivo);
    char comando[100];
    
    while(scanf(" %[^\n]", comando) != EOF){
        if(strncmp(comando, "ADD", 3)==0){
            sscanf(comando+4, " %99[^,] , %9[^,] , %99[^\n]", pessoas[n].nome, pessoas[n].telefone, pessoas[n].cidade);
            n++;
        }
        else if(strncmp(comando, "DEL", 3)==0){
            int indice;
            sscanf(comando + 4, "%d", &indice);
            if(indice>=0 && indice<n){
            for(int i=indice; i<n-1; i++){
                pessoas[i]=pessoas[i+1];
                }    
            n--;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%s, %s, %s\n", pessoas[i].nome, pessoas[i].telefone, pessoas[i].cidade);
    }

    return 0;
}
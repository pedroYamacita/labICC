#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int dia;
    int mes;
    int ano;
    int hora;
    int minutos;
    int segundos;
    char *descricao;
} Tarefa;


void lerTarefa(Tarefa *tarefa){
    scanf(" %d", &tarefa->dia);
    scanf(" %d", &tarefa->mes);
    scanf(" %d", &tarefa->ano);
    scanf(" %d", &tarefa->hora);
    scanf(" %d", &tarefa->minutos);
    scanf(" %d", &tarefa->segundos);
    tarefa->descricao=(char*)malloc(500*sizeof(char));
    scanf(" %[^\n]", tarefa->descricao);
    tarefa->descricao=(char *)realloc(tarefa->descricao, strlen(tarefa->descricao)*sizeof(char));
}

void printarTarefa(Tarefa *tarefa){
    printf("%.2d/%.2d/%.2d", tarefa->dia, tarefa->mes, tarefa->ano);
    printf(" - %.2d:%.2d:%.2d\n", tarefa->hora, tarefa->minutos, tarefa->segundos);
    printf("%s\n", tarefa->descricao);

}


int main(){
    Tarefa *tarefa = malloc(sizeof(Tarefa));
    int tarefas=0;
    scanf(" %d", &tarefas);

    for(int i=0; i<tarefas;i++){
        lerTarefa(tarefa);
        printarTarefa(tarefa);
    }
    free(tarefa);
    return 0;
}

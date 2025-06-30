#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *nome;
    int nusp;
    char *assunto;
} Alunos;

Alunos lerAlunos(){
    Alunos aluno;
    char *nome=(char *)malloc(100*sizeof(char));
    char *assunto=(char *)malloc(100*sizeof(char));
    
    scanf(" %[^\n] %d %[^\n]", nome, &aluno.nusp, assunto);
    
    aluno.nome=strdup(nome);
    aluno.assunto=strdup(assunto);
    free(nome);
    free(assunto);
    
    return aluno;
}

int main(){
    int N=0, M=0;
    scanf(" %d", &N);
    
    Alunos *aluno;
    
    aluno=malloc(sizeof(Alunos) * N);
    
    for(int i=0; i<N; i++){
        
        aluno[i] = lerAlunos(); 
    }

    scanf(" %d", &M);
    aluno=realloc(aluno, sizeof(Alunos)*(M+N));
    
    for(int i=0;i<M;i++){
        
        aluno[N+i] = lerAlunos();
    }

    for(int i=0; i<M+N; i++){
        printf("Discente %d:\nNome: %s\nNúmero USP: %d\nAssunto: %s\n\n", i+1, aluno[i].nome, aluno[i].nusp, aluno[i].assunto);
        free(aluno[i].nome);
        free(aluno[i].assunto);
    }

    free(aluno);
    return 0;
}
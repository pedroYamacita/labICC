#include <stdio.h>
#include <string.h>

int busca(char jogos[][51], int inicioBusca, int fimBusca, char procurado[]){
    if(inicioBusca > fimBusca){
        return -1; //nao encontrou o jogo
    }
    int meio=(inicioBusca+fimBusca)/2;
    int resultado=strcmp(jogos[meio], procurado);

    if (resultado==0){
        return meio;
    }
    else if(resultado<0){
        return busca(jogos, meio+1, fimBusca, procurado);//procurar a direita
    }
    else if(resultado>0){
        return busca(jogos, inicioBusca, meio-1, procurado);//procura a esquerda
    }
}






int main(){

    int nJogos;
    char jogoProcurado[51];
    scanf(" %d", &nJogos);

    char jogos[nJogos][51];

    for(int i=0; i<nJogos; i++){
        scanf(" %[^\n]", jogos[i]);
    }

    scanf(" %[^\n]", jogoProcurado);

    int posicao=busca(jogos, 0, nJogos-1, jogoProcurado);

    if (posicao != -1) {
        printf("Jogo encontrado na posição %d\n", posicao);
    } 
    else {
        printf("Jogo nao encontrado\n");
    }

    return 0;
}
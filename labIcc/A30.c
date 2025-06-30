#include <stdio.h>

int acharCaminho(int posiX, int posiY, int linhas, int colunas, char labirinto[][100], int visitado[][100]){
 
    int direcaoX[]={-1, 1, 0, 0};
    int direcaoY[]={0, 0, -1, 1};
    
    //verificar se continua dentro dos limites depois de andar
    if(posiX<0 || posiX>=linhas || posiY<0 || posiY>=colunas){
        return 0;
    }
    //verifica se ja foi visitado ou se é parede
    if(visitado[posiX][posiY]== 1 || labirinto[posiX][posiY] == '#'){
        return 0;
    }
    //encontrou o pote
    if(labirinto[posiX][posiY]== 'P'){
        return 1;
    }

    //marca como visitado
    visitado[posiX][posiY]=1;
    
    //andar pelas direções e chama a função para procurar dnv nessa nova posição
    for(int i=0; i<4; i++){
        int novoX= posiX+direcaoX[i];
        int novoY= posiY+direcaoY[i];
        if(acharCaminho(novoX, novoY, linhas, colunas, labirinto, visitado)){
            return 1;
        }
    }
    return 0;
}



int main(){
    int linhas, colunas, xdoJ, ydoJ;

    scanf(" %d %d", &linhas, &colunas);
    
    char labirinto[100][100];
    int visitado[100][100];
    
    for(int i=0; i<linhas; i++){
        for(int j=0;j<colunas; j++){
            visitado[i][j]=0;   
        }
    }
    
    for(int i = 0; i<linhas; i++){
        scanf(" %s", labirinto[i]);
        for(int j=0; j<colunas; j++){
            if(labirinto[i][j]== 'J'){
                xdoJ=i;
                ydoJ=j;
            }
        }
    }
    if(acharCaminho(xdoJ, ydoJ, linhas, colunas, labirinto, visitado)){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }
    return 0;
}
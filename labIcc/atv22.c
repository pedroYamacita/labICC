#include <stdio.h>
#define Naipes 4 
#define Cartas 13 


int main(){
    //strings de comparação
    const char naipes[4]="COPE";
    const char cartas[13]="A234567891JQK";
    
    int ncartas=0;
    int tabela[Naipes][Cartas]={0};
    //int valorCarta=0, naipe=0, encontro=0, igual10=1;

    scanf(" %d", &ncartas);
    
    char cartas_jogadas[ncartas][4];
    
    for(int i=0; i<ncartas; i++){
        scanf(" %s", &cartas_jogadas[i][0]);
        
        int valorCarta=0, naipe=0, encontro=0, igual10=1;//resetar todo loop
        
        while(encontro==0){
            //verifica se tem 10
            if(cartas_jogadas[i][0]=='1'){
            //no verificação do naipe, o 0 do 10 será pulado para a leitura do naipe
                igual10=2;
            }
            //verifica o valor da carta e vai passando pela string de valores
            if(cartas_jogadas[i][igual10]!=naipes[naipe])
                naipe++;
            //verifica o naipe da carta e passa pela string de naipes a variavel igual10 evita que o 0 seja lido no lugar do naipe
            else if(cartas_jogadas[i][0]!=cartas[valorCarta])
            
                valorCarta++;
            
            else
                //quando os naipe e carta sao iguai encerra o loop
                encontro=1;
            
            
        }
        //adiciona na tabela de contagem
        tabela[naipe][valorCarta]+=1;
    }
    for(int i=0; i<4; i++){
        switch(i){
            case 0: printf("Naipe: Copas\n"); break;
            case 1: printf("Naipe: Ouros\n"); break;
            case 2: printf("Naipe: Paus\n"); break;
            case 3: printf("Naipe: Espadas\n"); break;
        }
        for(int j=0; j<Cartas; j++){
            if(cartas[j]=='1'){
                printf("10: %d\n", tabela[i][j]);
            }
            else{
                printf("%c: %d\n", cartas[j], tabela[i][j]);
            }
        }
    }
    return 0;
}
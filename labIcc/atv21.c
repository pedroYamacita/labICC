#include <stdio.h>

int main(){

    int alunos=0, questoes=0;
    scanf(" %d %d", &questoes, &alunos);

    char matriz[alunos][questoes];
    char gaba[questoes+1];
    
    scanf(" %s", gaba);

    for (int i = 0; i < alunos; i++)
    {
        for (int j = 0; j < questoes; j++)
        {
            scanf(" %c", &matriz[i][j]);
        }
        
    }
    

    for(int i=0; i<alunos; i++)
    {
        float certas=0;
        double nota=0;
        for (int j = 0; j < questoes; j++)
        {
            if(matriz[i][j]==gaba[j])
            certas++;
        }
        nota=10*(certas/questoes);
        printf("%.2lf\n", nota);
        
    }
    return 0;

}
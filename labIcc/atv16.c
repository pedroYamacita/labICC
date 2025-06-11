#include <stdio.h>
int main()
{
    int tamanho;
    int repetidas=0, tem_repetidas=0;
    scanf(" %d", &tamanho);
    char letras[tamanho+1];
    scanf(" %s", letras);

    for(int i=0; i<tamanho; i++)
    {
        repetidas = 0;
        for(int j=0; j<tamanho; j++)
        {
            if(letras[i]==letras[j])
            {
                repetidas++;
            }
        }  
        if(repetidas%2!=0 && tem_repetidas==0)
        {
            tem_repetidas=1;
        }
        else if(tem_repetidas==1 && repetidas%2!=0)
        {
            printf("Nao\n");
            return 0;
        }
    }
    if(tamanho%2!=0)
    {
        if(tem_repetidas)
        {
            printf("Sim\n");
        }
        else
        {
        printf("Nao\n");
        }
    }
    else
    {
        if(tem_repetidas)
        {
            printf("Nao\n");
        }
        else
        {
            printf("Sim\n");
        }
    }
    return 0;
}
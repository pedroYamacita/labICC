#include <stdio.h>

int main ()
{
    int vendas[31];
    int maior;
    for(int i=0; i<31; i++)
    {
        scanf(" %d", &vendas[i]);
    }
    maior=vendas[0];
    for(int i=0; i<31; i++)
    {
        for(int j=i+1; j<31; j++)
        {
            if(vendas[i]<vendas[j] && maior<vendas[j])
            {
                maior=vendas[j];
            }
        }
    }
    printf("%d\n", maior);
    
    for (int i = 0; i < 31; i++)
    {
        if(vendas[i]==maior)
        {
            printf("%d\n", i+1);
        }
    }
    

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    //já considerando o primeiro termo
    double soma=1;
    scanf(" %d", &n);
    //loop da soma
    for(int i=1; i<+n; i++)
    {
        //resetar o valor do fatorial antes de fazer
        double fato=1;
        //fatorial
        for(int j=i+1; j!=0; j--)
        {
            fato=fato*j;
        }
        //inversão dos sinais, desconsiderando o primeiro termo
        if(i % 2 ==0)
        {
            fato*=-1;
        }
        soma+=(1/fato);
    }
    printf("%f", soma);
    return 0;
}
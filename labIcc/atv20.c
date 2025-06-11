#include <stdio.h>
void bubblesort(int vetor[], int tamanho)
{
    int aux=0;
    for(int i=0; i<tamanho; i++)
    {
        for(int j=i; j<tamanho; j++)
        {
            if(vetor[i]>vetor[j])
            {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    for(int i=0; i<tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}
int main()
{
    int tamanho;
    scanf(" %d", &tamanho);
    int vetor[tamanho];
    
    for (int i = 0; i < tamanho; i++)
    {
        scanf(" %d", &vetor[i]);
    }

    
    bubblesort(vetor, tamanho);
    return 0;
}
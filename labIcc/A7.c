#include <stdio.h>
#include <math.h>
int main (){
    int a, b, c;
    float raiz, raiz2, delta;
    scanf(" %d %d %d", &a, &b, &c);
    delta=pow(b, 2)-(4*a*c);

    if (delta<0)
    {
        printf("NAO EXISTE RAIZ REAL");
    }
    else if (delta == 0)
    {
        raiz=(-b+sqrt(delta))/(2*a);
        printf("%.3f", raiz);
    }
    else
    {
        raiz=((-1*b)+sqrt(delta))/(2*a);
        raiz2=((-1*b)-sqrt(delta))/(2*a);
        if (raiz>raiz2)
        {
            printf("%.3f %.3f", raiz2, raiz);
        }
        else{
            printf("%.3f %.3f", raiz, raiz2);
        }
        
    }
    
    return 0;
}
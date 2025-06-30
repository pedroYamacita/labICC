#include <stdio.h>

int main()
{
    int *n1, *n2;
    n1=(int *)malloc(sizeof(int));
    n2=(int *)malloc(sizeof(int));
    
    scanf("%d %d", n1, n2);
    
    printf("%d %d\n", *n1, *n2);
    
    *n1=*n1+*n2;
    *n2=*n1-*n2;
    *n1=*n1-*n2;
    
    printf("%d %d", *n1, *n2);
    
    free(n1);
    free(n2);
    
    return 0;
}    
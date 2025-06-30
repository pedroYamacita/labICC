#include <stdio.h>
#include <math.h>
int main(){
    int N, zeros, i;
    zeros=0;
    scanf(" %d", &N);
    for (i = 5; i <= N; i*=5)
    {
        zeros += N/i;
    }
    printf("%d", zeros);
    return 0;
}
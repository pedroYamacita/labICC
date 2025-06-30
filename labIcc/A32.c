#include <stdio.h>

unsigned long long fibo(int n, unsigned long long armazenar[]){

    if(n==0) return 0;
    if(n==1) return 1;
    //indica se já foi ou nao calculado
    if(armazenar[n]!=(unsigned long long)-1){
        return armazenar[n];
    }

    armazenar[n]=fibo(n-1, armazenar)+fibo(n-2, armazenar);
    return armazenar[n];
}


int main(){
    int n;
    unsigned long long armazenar[86];

    for(int i=0; i<86; i++){
        armazenar[i]=(unsigned long long)-1;//inicializar com maior valor possivel q sera usado como sinalizador
    }
    while(1){
        scanf(" %d", &n);
        if(n==0) break;   
        
        printf("%llu\n", fibo(n, armazenar));
    }
    return 0;
}
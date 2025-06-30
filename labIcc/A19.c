#include <stdio.h>

int readInt(){
    int n;
    scanf(" %d", &n);
    return (n);
}

double readDouble(){
    double T;
    scanf(" %lf", &T);
    return(T);


}

void printDouble(double a){
    printf("%.2lf", a);



}

int main(){

    int N;
    N=readInt();
    
    double notas[N];
    
    for (int i = 0; i < N; i++)
    {
        notas[i]=readDouble();
    }
    double denominador=0, MAH=0;

    for(int i=0; i<N; i++)
    {
        denominador+=1/(notas[i]+1);
    }
    MAH=(N/denominador)-1;

    printDouble(MAH);


    return 0;    
}
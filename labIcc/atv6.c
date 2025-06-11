#include <stdio.h>
int main (){
    double n1, n2, n3, n4, media;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    if (n1<=n2 && n1<=n3 && n1<=n4)
    {
        media=(n2 + n3 + n4)/3;
        printf("%.4lf", media);
    }
    else if (n2<n1 && n2<n3 && n2<n4)
    {
        media=(n1 + n3 + n4)/3;
        printf("%.4lf", media);
    }
    else if (n3<=n1 && n3<=n2 && n3<=n4)
    {
        media=(n1 + n2 + n4)/3;
        printf("%.4lf", media);
    }
    else{
        media=(n1 + n2 + n3)/3;
        printf("%.4lf", media);
    }
    
    
    return 0;
}
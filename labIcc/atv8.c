#include <stdio.h>
int main (){
    float n1, n2;
    char operacao;
    scanf(" %f %c %f", &n1, &operacao, &n2);
    switch (operacao)
    {
    case '+':
        printf("%.2f", n1 + n2);
        break;
    case '-':
        printf("%.2f", n1 - n2);
        break;
    case '*':
        printf("%.2f", n1 * n2);
        break;
    case '/':
        printf("%.2f", n1 / n2);
    
    default:
        break;
    }
    return 0;
}
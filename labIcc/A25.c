#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscarNaMensagem(const char *mensagem, const char *chave){
    int tamanho_mensagem = strlen(mensagem);
    int tamanho_chave = strlen(chave);
    //laço de checagem 
    for(int i=0; i<=tamanho_mensagem-tamanho_chave; i++){
        int iguais=1;
        //comparar todos os caracteres da mensagem com a chave. Explicação detalahda do laço ao final
        for(int j=0;j<tamanho_chave;j++){
            if(mensagem[i+j]!=chave[j]){
                iguais=0;
                //se achar diferentes:
                break;
            }
        }
        if(iguais){return 1;}//encontrou
    }
    return 0;//n encontrou
}

int main(){
    
    char *mensagem=calloc(10001, sizeof(char));
    char *chave=calloc(10001, sizeof(char));

    scanf(" %10000s", mensagem);
    scanf(" %10000s", chave);

    int tamanho_encontrado=0;
    //o i vai diminuindo a medida q a a string chave completa nao é completamente encntrada na mensagem
    for(int i = strlen(chave); i>0; i--){
        //vai reduzindo o tamanho da string chave
        chave[i]='\0';
        //busca a string reduzida na mensagem
        if(buscarNaMensagem(mensagem, chave)){
            //quando encontramos, guardamos o valor de i q é oo "comprimento" da nossa string encontrada na mesnagem
            tamanho_encontrado=i;
            //saimos do laço pq se nao vamos reduzindo até apenas os primeiro caracter da string
            break;   
        }
    }
    printf("%d %.*s", tamanho_encontrado, tamanho_encontrado, chave);
    
    free(mensagem);
    free(chave);
    return 0;
}

//a explicação é mais para eu mesmo nao me perder e consegui compreender o q fiz quando revisitar o codigo

//a medida q o i aumenta, percorremos a string da mensagem para iniciarmos a comparação com a chave a partir de todos os caracteres já q queremos a chave em sequencia na mensagem. quando entramos no laço em j, a medida q percorremos a chave, tambem percorremos a mensagem, conseguindo assim comparar sequencialmente as duas, assim q um valor diferente é encontrado, saimos do laço e retornamos para a main q nao encontramos toda a parte da chave passada para a função sequencialmente na mensagem, a main ai entao reduz a chave e manda de novo para a função q vai repetir o processo.
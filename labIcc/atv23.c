#include <stdio.h>
#include <string.h>
int main(){
    int linhas, formato;
    
    scanf(" %d %d", &linhas, &formato);
    
    for(int i=0; i<linhas; i++){
        int tamanho;
        char musica[101];
        
        scanf(" %[^\n]s", musica);
        tamanho=strlen(musica); 
        musica[tamanho+1];
        if(formato==0){
            
            for(int j=0; j<tamanho; j++){
                if(musica[j]>='A' && musica[j]<='Z'){
                    musica[j]+=32;
                }
            }

        }
        else if(formato==1){
            for(int j=0; j<tamanho; j++){
                if(musica[j]>='a' && musica[j]<='z'){
                    musica[j]-=32;
                }
            }
        }
        printf("%s\n", musica);
    }
    return 0;
}
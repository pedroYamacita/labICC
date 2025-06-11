#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int livrosIguais(char *titulos, char *titulo){
    //compara o titulos com os demais titulos e retorna 0 quando o titulo é igual a algum ja existente
    return strcmp(titulos, titulo) == 0;

}


int main(){
    int n;
    scanf(" %d", &n);
    //vao armazenar todos os titulos e autores
    char **titulos=NULL, **autores=NULL;
    int *anos=NULL, *quantidades=NULL;
    int livrosDiferentes=0;

    for(int i=0; i<n; i++){
        char linha[251];
        scanf(" %[^\n]s", linha);
        //armazenam temporariamente um titulo e autor recem lidos
        char *titulo, *autor, *ano;
        
        //sepração das strings
        titulo=strtok(linha, ",");
        autor=strtok(NULL, ",");
        ano=strtok(NULL, ",");

        int iguais=0;
        for(int j=0; j<livrosDiferentes; j++){
            if(livrosIguais(titulos[j], titulo)){
                quantidades[j]++;
                iguais=1;
                break;
            }
        }
        if(iguais==0){
            //realocar os vetores de vetores para guardar mais um livro diferentes
            titulos=realloc(titulos, (livrosDiferentes+1) * sizeof(char *));
            autores=realloc(autores, (livrosDiferentes+1) * sizeof(char *));
            anos=realloc(anos, (livrosDiferentes+1) * sizeof(int));
            quantidades=realloc(quantidades, (livrosDiferentes+1) * sizeof(int));

            //alocar memoria exata para cada livroo e autor dentro dos vetores de vetores os copia
            titulos[livrosDiferentes]=malloc(strlen(titulo)+1);
            strcpy(titulos[livrosDiferentes], titulo);
           
            autores[livrosDiferentes]=malloc(strlen(autor)+1);
            strcpy(autores[livrosDiferentes], autor);
            //guardar o ano no vetor de anos
            sscanf(ano, " %d", &anos[livrosDiferentes]);

            quantidades[livrosDiferentes]=1;
            livrosDiferentes++;
        }
    }

    printf("Catalogo de Livros:\n");
    for(int i=0; i<livrosDiferentes; i++){
     
        printf("Livro %d:\n", i + 1);
        printf("Titulo: %s\n", titulos[i]);
        printf("Autor:%s\n", autores[i]);
        printf("Ano: %d\n", anos[i]);
        printf("Quantidade: %d\n", quantidades[i]);
        //so imprime \n se nao for a ultima linha
        if(i!=livrosDiferentes-1){
            printf("\n");
        }
    }

     for (int i = 0; i < livrosDiferentes; i++) {
        free(titulos[i]);
        free(autores[i]);
    }
    free(titulos);
    free(autores);
    free(anos);
    free(quantidades);
    return 0;
}
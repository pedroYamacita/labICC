#include <stdio.h>

int main(){
    int canalTV1=0, canalTV2=0;
    int *TV1=NULL, *TV2=NULL;
    scanf(" %d %d", &canalTV1, &canalTV2);
    TV1= &canalTV1;
    TV2= &canalTV2;
    swap(TV1, TV2);
    printf("%d %d", *TV1, *TV2);
    return 0;
}
void swap(int *TV1, int *TV2){
    int troca;
    troca= *TV1;
    *TV1=*TV2;
    *TV2=troca;

}
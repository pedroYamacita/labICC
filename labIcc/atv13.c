#include <stdio.h>


int main()
{
    int livro1, livro2, livro3, oper, oper2, oper3, troca;
    int *l1, *l2, *l3;

    scanf(" %d %d %d", &livro1, &livro2, &livro3);
    l1=&livro1;
    l2=&livro2;
    l3=&livro3;
    scanf(" %d", &oper);
    scanf(" %d", &oper2);
    scanf(" %d", &oper3);
                
    switch(oper)
    {
        case -1:
            l1=NULL;
        break;
        
        case 0:
            *l1+=1;
        break;    
        
        case 1:
        break;
        
        case 2:
            if(l2==NULL)
            {
                l2=l1;
                l1=NULL;
            }
            else
            {
            troca=*l1;
            *l1=*l2;
            *l2=troca;
            }
        break;

        case 3:
            if(l3==NULL)
            {
                l3=l1;
                l1=NULL;
            }
            else
            {
            troca=*l1;
            *l1=*l3;
            *l3=troca;
            }
        break;
    }



    switch(oper2)
    {
        case -1:
            l2=NULL;
        break;
        
        case 0:
            *l2+=1;
        break;    
        
        case 1:
            if(l1==NULL)
            {
                l1=l2;
                l2=NULL;
            }
            else
            {
            troca=*l2;
            *l2=*l1;
            *l1=troca;
            }
        break;
        
        case 2:
        break;
        
        case 3:
            if(l3==NULL)
            {
                l3=l2;
                l2=NULL;
            }
            else
            {
            troca=*l3;
            *l3=*l2;
            *l2=troca;
            }
        break;
    }



    switch(oper3)
    {
        case -1:
            l3=NULL;
        break;
        
        case 0:
            *l3+=1;
        break;    
        
        case 1:
            if(l1==NULL)
            {
                l1=l3;
                l3=NULL;
            }
            else
            {
            troca=*l1;
            *l1=*l3;
            *l3=troca;
            }
        case 2:
            if(l2==NULL)
            {
                l2=l3;
                l3=NULL;
            }
            else
            {
            troca=*l3;
            *l3=*l2;
            *l2=troca;
            }
        break;
        
        case 3:
        break;
    }
            
    
    if(l1==NULL)
    {
        printf("cartao1 -> Livro fora da estante\n");
    }
    else
    {
        printf("cartao1 -> %d\n", *l1);
    }
    if(l2==NULL)
    {
        printf("cartao2 -> Livro fora da estante\n");
    }
    else
    {
        printf("cartao2 -> %d\n", *l2);
    }
    if(l3==NULL)
    {
        printf("cartao3 -> Livro fora da estante\n");
    }
    else
    {
        printf("cartao3 -> %d\n", *l3);
    }
    return 0;
}
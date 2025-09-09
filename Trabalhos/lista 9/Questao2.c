#include <stdio.h>
#include <string.h>
#define MAX 50

struct loja{
    char tipo[MAX];
    int tamanho;
    int preco;
};

void registrar(struct loja roupas[MAX]){
   int i = 0, continuar;
   do{
       getchar();
       printf("Qual o tipo de roupa? ");
       fgets(roupas[i].tipo, sizeof(roupas[i].tipo), stdin);
       
       
       printf("\nQual o tamanho da roupa? ");
       scanf("%d", &roupas[i].tamanho);
       
       printf("\nQual o preco da roupa?");
       scanf("%d", &roupas[i].preco);
       
       printf("\nQuer adicionar outra?\n1 - Sim\n0 - Nao\n");
       scanf("%d", &continuar);
       
       i++;
   }while(continuar == 1);
}

void buscar(struct loja roupas[MAX], int busca){
    int i;
    
    for(i = 0; i < MAX; i++){
        if(roupas[i].tamanho == busca){
            printf("\nTipo: %s", roupas[i].tipo);
            printf("Tamanho: %d", roupas[i].tamanho);
            printf("\nPreco: %d\n", roupas[i].preco);
        }
    }
}


int main(){
    struct loja roupas[MAX];
    int busca;
    
    registrar(roupas);
    
    printf("Qual tamanho você busca? ");
    scanf("%d", &busca);
    
    buscar(roupas, busca);
    
    return 0;

}
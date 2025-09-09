#include <stdio.h>
#include <string.h>
#define MAX 50

struct produto{
  char nome[MAX];
  char tipo[MAX];
  int codigo;
  int preco;
  char descricao[100];
  int alcoolica;
  int adicionar;
  
};

int registrar(struct produto prod[MAX]){
    int i = 0, continuar = 0;
    
    do{
        printf("\nDigite o nome do produto [%d]: ", i+1);
        fgets(prod[i].nome, sizeof(prod[i].nome), stdin);
        prod[i].nome[strcspn(prod[i].nome, "\n")] = '\0';
        
        printf("\nDigite o tipo do produto [%d]: ", i+1);
        fgets(prod[i].tipo, sizeof(prod[i].tipo), stdin);
        prod[i].tipo[strcspn(prod[i].tipo, "\n")] = '\0';
        
        if(strcmp(prod[i].tipo, "Bebida") == 0 || strcmp(prod[i].tipo, "bebida") == 0){
            printf("\nEssa bebida eh alcoolica?\n1 - Sim\n0 - Nao\n");
            scanf("%d", &prod[i].alcoolica);
            getchar();
        }
        
        printf("\nDigite o codigo do produto [%d]: ", i+1);
        scanf("%d", &prod[i].codigo);
        getchar();
        
        printf("\nDigite o preço do produto [%d]: ", i+1);
        scanf("%d", &prod[i].preco);
        getchar();
        
        printf("\nDeseja adicionar uma descricao?\n1 - Sim\n0 - Nao\n");
        scanf("%d", &prod[i].adicionar);
        getchar();
        
        if(prod[i].adicionar == 1){
            printf("\nDigite a descricao do produto [%d]: ", i+1);
            fgets(prod[i].descricao, sizeof(prod[i].descricao), stdin);
            prod[i].descricao[strcspn(prod[i].descricao, "\n")] = '\0';
        }
        
        i++;
        
        if (i >= MAX) {
            printf("Limite maximo de produtos atingido.\n");
            break;
        }
        
        printf("\nDeseja adicionar mais um produto?\n1 - Sim\n0 - Nao\n");
        scanf("%d", &continuar);
        getchar();
        
    }while(continuar == 1);
    
    return i;
}

void buscar(struct produto prod[MAX], int total_produtos){
    int i, continuar = 0, deseja, encontrado;
    
    do{
        
        printf("Qual o codigo do produto que deseja buscar?\n");
        scanf("%d", &deseja);
        getchar();
        
        encontrado = 0;
        
        for(i = 0; i < total_produtos; i++){
            if(prod[i].codigo == deseja){
                encontrado = 1;
                printf("\n------------------------------------\n");
                printf("Nome do produto: %s\n", prod[i].nome);
                printf("Tipo do produto: %s\n", prod[i].tipo);
                
                if (strcmp(prod[i].tipo, "Bebida") == 0 || strcmp(prod[i].tipo, "bebida") == 0) {
                    if (prod[i].alcoolica == 1) {
                        printf("Eh alcoolica!\n");
                    } else {
                        printf("Nao eh alcoolica!\n");
                    }
                }
                
                printf("Codigo do produto: %d\n", prod[i].codigo);
                printf("Preco do produto: %d\n", prod[i].preco);
                if(prod[i].adicionar == 1){
                    printf("Descricao do produto: %s\n", prod[i].descricao);
                }
                
                break;
            }
        }
        
        if (!encontrado) {
        printf("\nProduto com codigo %d nao encontrado.\n", deseja);
        }
        
        printf("Deseja buscar outro produto?\n1 - Sim\n0 - Nao\n");
        scanf("%d", &continuar);
        getchar();
        
    }while(continuar == 1);
}

int main(){
  struct produto prod[MAX];
  int i, total = 0;
  
  
  int total_produtos = registrar(prod);
  buscar(prod, total_produtos);
  
    for(i = 0; i < total_produtos; i++){
        total += prod[i].preco;
    }
    
    printf("\nValor de todos os produtos somados: %d", total);
  
  return 0;
}
#include <stdio.h>
#include <string.h>
#define MAX 50

struct contatos{
    char nome[MAX];
    int telefone;
    char endereco[MAX];
};

void cadastro(struct contatos cont[MAX], int n){
    int i;

    for(i = 0; i < n; i++){
        getchar();
        printf("Qual o nome do contato %d: ", i+1);
        fgets(cont[i].nome, sizeof(cont[i].nome), stdin);
        cont[i].nome[strcspn(cont[i].nome, "\n")] = '\0';
        
        printf("Qual o numero de telefone do contato %d: ", i+1);
        scanf("%d", &cont[i].telefone);
        getchar();

        printf("Qual o endereço do contato %d: ", i+1);
        fgets(cont[i].endereco, sizeof(cont[i].endereco), stdin);
        cont[i].endereco[strcspn(cont[i].endereco, "\n")] = '\0';
    }
}

void buscar(struct contatos cont[MAX]){
    int escolha = 0, continuar = 0;
    do{
    printf("Qual contato você deseja ver?");
    scanf("%d", &escolha);    
        
    printf("\n----------------------------------------\n");
    printf("Nome: %s\n", cont[escolha-1].nome);
    printf("Numero: %d\n", cont[escolha-1].telefone);
    printf("Endereco: %s", cont[escolha-1].endereco);
    
    printf("\nVer outro contato?\n1 - Sim\n0 - Nao\n");
    scanf("%d", &continuar);
        
    }while(continuar == 1);
}

int main(){
    int i, n;
    struct contatos cont[MAX];

    printf("Digite a quantidade de contatos cadastrados: ");
    scanf("%d", &n);

    cadastro(cont, n);
    buscar(cont);

    return 0;
}
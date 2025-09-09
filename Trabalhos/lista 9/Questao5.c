#include <stdio.h>
#include <string.h>
#define MAX 50

struct vendedores{
    char nome[50];
    char endereco[50];
    int telefone;
    float preco;
    
};

void Cadastro(struct vendedores p[MAX], int n){
    int i;
    
    for(i = 0; i < n; i++){
        getchar();
        printf("\nDigite o nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = 0;
        
        printf("\nDigite o endereco: ");
        fgets(p[i].endereco, sizeof(p[i].endereco), stdin);
        
        printf("\nDigite o telefone: ");
        scanf("%d", &p[i].telefone);
        
        printf("\nDigite o preco: ");
        scanf("%f", &p[i].preco);
    }
}

void mostrar(struct vendedores p[MAX], int n, float media){
    int i;
        for(i = 0; i < n; i++){
        if(p[i].preco < media){
            printf("\n%s", p[i].nome);
            
            printf("\n%s", p[i].endereco);
            
            printf("%d", p[i].telefone);
            
            printf("\n%0.1f", p[i].preco);
            printf("\n");
        }
    }
}

int main(){
    struct vendedores p[MAX];
    int i, n;
    float media, temp;
    
    printf("Quantos vendedores serao cadastrados?");
    scanf("%d", &n);
    
    Cadastro(p, n);
    
    for(i = 0; i < n; i++){
        temp += p[i].preco;
    }
    
    media = temp / n;
    
    mostrar(p, n, media);

return 0;
}
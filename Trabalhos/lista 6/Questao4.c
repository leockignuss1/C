#include <stdio.h>
#define MAX 20

void SomaElementos(int vet1[MAX][MAX], int tamanho){
    int i, j, soma = 0;

    for(i = 0; i < tamanho; i++){
        for(j = i+1; j < tamanho; j++){
            soma += vet1[i][j];
        }
    }
    printf("Soma dos elementos acima da diagonal principal: %d", soma);
}


int main(){
    int i, j, vet1[MAX][MAX], tamanho;
    
    printf("Defina a dimensao das linhas e colunas da matriz: ");
    scanf("%d", &tamanho);

    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            printf("Digite um numero para a posicao [%d %d]: ", i+1, j+1);
            scanf("%d", &vet1[i][j]);
        }
    }

    SomaElementos(vet1, tamanho);

}
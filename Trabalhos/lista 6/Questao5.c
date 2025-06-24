#include <stdio.h>
#define MAX 20

void Multiplicacao(int vet1[MAX][MAX], int tamanho, int x){
    int i, j, vet2[MAX][MAX] = {0};

    for(i = 0; i < tamanho; i++){
        for(j = tamanho-1; j >= 0; j--){
            vet2[i][j] = vet1[i][j];
        }
    }
    for(i = 0; i < tamanho; i++){
        for(j = tamanho-1; j >= 0; j--){
        vet2[i][j] *= x;
        }
    }

    for(i = 0; i < tamanho; i++){
        for(j = tamanho-1; j >= 0; j--){
        printf("%d ",vet2[i][j]);
        }
    printf("\n");
    }
}

int main(){
    int i, j, vet1[MAX][MAX], x, tamanho;

    printf("Digite um tamanho para a linha/coluna da matriz: ");
    scanf("%d", &tamanho);
    printf("Digite um valor para a constante x: ");
    scanf("%d", &x);

    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            printf("Digite um numero para a posicao [%d %d]: ", i+1, j+1);
            scanf("%d", &vet1[i][j]);
        }
    }

    Multiplicacao(vet1, tamanho, x);

}
#include <stdio.h>
#define MAX 20

int main(){
    int i, j, linha, coluna, vet1[MAX][MAX], vet2[MAX][MAX];

    printf("Defina a quantidade de linha da matriz: ");
    scanf("%d", &linha);
    printf("Defina a quantidade de coluna da matriz: ");
    scanf("%d", &coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Defina um numero para a posicao [%d %d]: ", i+1, j+1);
            scanf("%d", &vet1[i][j]);
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            vet2[j][i] = vet1[i][j];
        }
    }

    for(i = 0; i < coluna; i++){
        for(j = 0; j < linha; j++){
            printf("%d ", vet2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
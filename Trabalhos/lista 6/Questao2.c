#include <stdio.h>
#define LIN 3
#define COL 5

void somaColuna(int vet1[LIN][COL]){
    int i, j, vet2[COL] = {0};

    for(j = 0; j < COL; j++){
        for(i = 0; i < LIN; i++){
            vet2[j] += vet1[i][j];
        }
    }
    for(i = 0; i < COL; i++){
        printf("%d ", vet2[i]);
    }
}

int main(){
    int i, j, vet1[LIN][COL];

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite um numero para a posicao [%d %d]: ", i+1, j+1);
            scanf("%d", &vet1[i][j]);
        }
    }

somaColuna(vet1);

}
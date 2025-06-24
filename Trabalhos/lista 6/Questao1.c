#include <stdio.h>
#define LIN 5
#define COL 3

void somaLinha(int vet1[LIN][COL]){
    int i, j, vet2[LIN] = {0};

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            vet2[i] += vet1[i][j];
        }
    }
    for(i = 0; i < LIN; i++){
        printf("%d ", vet2[i]);
    }
}

int main(){
    int i, j, vet1[LIN][COL];

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite o valor para a posicao [%d %d]: ", i+1, j+1);
            scanf("%d", &vet1[i][j]);
        }
    }

        somaLinha(vet1);

}
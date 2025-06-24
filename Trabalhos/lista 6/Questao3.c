#include <stdio.h>
#define LIN 5
#define COL 3

int main(){
    int i, j, vet1[LIN][COL], vet2[LIN][COL] = {0};

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite um numero para a posicao [%d %d]: ", i+1, j+1);
            scanf("%d", &vet1[i][j]);
        }
    }

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            if(vet1[i][j] % 3 == 0){
                vet2[i][j] = vet1[i][j];
            }
        }
    }

    printf("Multiplos de 3: ");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            if(vet2[i][j] != 0){
                printf("%d ", vet2[i][j]);
            }
        }
    }
}
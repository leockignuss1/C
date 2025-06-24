#include <stdio.h>
#define LIN 7
#define COL 4

int main(){
    int i, j;
    float soma[COL] = {0}, media[COL] = {0}, vet1[LIN][COL];

    printf("7 usuarios assistiram a 4 filmes e deram notas de 0 a 5 a cada um deles");
    printf("\nDigite as notas que cada usuario deu a cada filme:");

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("\nNota do usuario %d para o filme %d: ", i+1, j+1);
            scanf("%f", &vet1[i][j]);
            if(vet1[i][j] > 5){
                printf("Nota invalida! Por favor insira novamente\n");
                j--;
            }
        }
    }

    for(i = 0; i < COL; i++){
        for(j = 0; j < LIN; j++){
            soma[i] += vet1[j][i];
        }
    }

    for(i = 0; i < COL; i++){
        media[i] = soma[i]/LIN;
    }

    for(i = 0; i < COL; i++){
        printf("\nMedia das notas do filme %d: %0.2f", i+1, media[i]);
    }

}
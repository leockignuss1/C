#include <stdio.h>
#define MEGA 6
#define APOSTA 7

void Comparacao(int vetAposta[APOSTA], int vetMega[MEGA]){
    int i, j, count = 0;
   
    for(i = 0; i < APOSTA; i++){
        for(j = 0; j < MEGA; j++){
            if(vetAposta[i] == vetMega[j]){
                count++;
            }
        }
    }
    printf("\nQuantidade de numeros acertados: %d", count);
}

int main(){
    int i, vetMega[MEGA], vetAposta[APOSTA];
   
    printf("Digite os numeros apostados: \n");
    for(i = 0; i < APOSTA; i++){
        scanf("\n%d", &vetAposta[i]);
    }
    printf("Digite os numeros sorteados: \n");
    for(i = 0; i < MEGA; i++){
        scanf("\n%d", &vetMega[i]);
    }
   
    Comparacao(vetAposta,vetMega);
   
}
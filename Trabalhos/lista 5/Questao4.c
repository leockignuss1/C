#include <stdio.h>
#define MAX 100

int main(){
    int i, j, vet[MAX], count = 0;

    for(i = 0; i < MAX - 1; i++){
        printf("\nDigite um numero para a posicao %d: ", i + 1);
        scanf("%d", &vet[i]);

        if(vet[i] == -1){
            break;
        }
    }
    printf("Os numeros entre 15 e 45 sao: ");
    for(j = 0; j < i; j++){
        if(vet[j] >= 15 && vet[j] <= 45){
            printf("%d ", vet[j]);
            count++;
        }
    }
    printf("\nSendo um total de %d numeros", count);

    return 0;
}
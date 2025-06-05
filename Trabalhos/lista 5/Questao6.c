#include <stdio.h>
#define MAX 13

int main(){
    int i, vet[MAX];

    for(i = 0; i < MAX - 1; i++){
        printf("\nDigite o valor para o termo %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("Os numeros multiplos de 3 estao na posicao: ");
    for(i = 0; i < MAX - 1; i++){
        if(vet[i] % 3 == 0){
            printf("%d ", i + 1);
        }
    }
}
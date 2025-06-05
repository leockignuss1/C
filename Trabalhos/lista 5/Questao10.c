#include <stdio.h>
#define MAX 10

int main(){
    int i, vet1[MAX], vet2[MAX], vet3[MAX];
   
    printf("Defina 10 termos para o primeiro vetor: \n");
    for(i = 0; i < MAX; i++){
        printf("\nDigite o termo %d: ", i + 1);
        scanf("%d", &vet1[i]);
    }
    printf("Defina 10 termos para o segundo vetor: \n");
    for(i = 0; i < MAX; i++){
        printf("\nDigite o termo %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }
    printf("A subtracao dos vetores: \n");
    for(i = 0; i < MAX; i++){
        vet3[i] = vet1[i] - vet2[i];
        printf("%d - %d = %d\n", vet1[i], vet2[i], vet3[i]);
    }
    return 0;
}
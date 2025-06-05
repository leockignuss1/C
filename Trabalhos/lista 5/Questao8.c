#include <stdio.h>
#define MAX 100

void Comparacao(int vet1[MAX], int vet2[MAX], int tamanho){
    int i, j, count = 0;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            if(vet1[i] == vet2[j]){
            count++;    
            }
        }
    }
    printf("\n%d", count);
}


int main(){
    int i, vet1[MAX], vet2[MAX], tamanho = 0;
   
    printf("Qual sera o tamanho dos parametros? ");
    scanf("%d", &tamanho);
   
    for(i = 0; i < tamanho; i++){
        printf("\nEscolha o termo %d: ", i + 1);
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < tamanho; i++){
        printf("\nEscolha o termo %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }
   
    Comparacao(vet1,vet2,tamanho);
}
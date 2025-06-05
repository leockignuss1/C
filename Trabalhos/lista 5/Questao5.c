#include <stdio.h>
#define MAX 100

void Ordem(int vet[MAX], int quantidade){
    int i, j, temp;

    for(i = 0; i < quantidade - 1; i++){
        for(j = 0; j < quantidade - 1; j++){
            if(vet[j] > vet[j + 1]){
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}


int main(){
    int i, quantidade, vet[MAX];
    
    printf("Digite a quantidade de termos que deseja: ");
    scanf("%d", &quantidade);
    for(i = 0; i < quantidade; i++){
        printf("\nDigite o termo %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    Ordem(vet, quantidade);

    for(i = 0; i < quantidade; i++){
        printf("%d ", vet[i]);
    }
    return 0;

}
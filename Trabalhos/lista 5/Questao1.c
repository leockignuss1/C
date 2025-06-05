#include <stdio.h>
#define QUANTIDADE 51

void procurar_numero(int vet[QUANTIDADE]){
int i, numero = vet[QUANTIDADE - 1];

    for(i = 0; i < QUANTIDADE - 1; i++){
        if(vet[i] == numero){
            printf("%d ", i + 1);
        }
    }

}

int main(){
    int vet[QUANTIDADE], i;

    for(i = 0; i < QUANTIDADE - 1; i++){
        printf("\nDigite o numero %d:", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("Digite o numero a ser procurado: ");
    scanf("%d", &vet[50]);

    procurar_numero(vet);

}
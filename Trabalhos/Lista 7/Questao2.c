#include <stdio.h>
#include <string.h>
#define MAX 500

void lerFrase(char frase[MAX]){
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

    size_t len = strlen(frase);
    if(len > 0 && frase[len - 1] == '\n'){
        frase[len - 1] = '\0';
    }
}

int contabilizar(char frase[MAX], char letra, int vet1[MAX]){
    int i, count=0;

    for(i = 0; i < MAX; i++){
        if(frase[i] == letra){
            vet1[count] = i;
            count++; 
        }
    }
    return count;
}

int main(){
    int vet1[MAX];
    char frase[MAX], letra;

    lerFrase(frase);
    printf("Digite uma letra para ver a quantidade na frase: ");
    scanf(" %c", &letra);

    int count = contabilizar(frase, letra, vet1);

    printf("A quantidade que '%c' se repete: %d\n", letra, count);
    printf("Nas posicoes:");

    for(int i = 0; i < count; i++){
        printf(" %d", vet1[i]+1);
    }

    printf("\n");
    return 0;
}
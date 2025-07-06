#include <stdio.h>
#include <string.h>
#define MAX 500

void lerFrase(char frase[MAX]){
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);
}

int contabilizar(char frase[MAX], char letra){
    int i, count=0;

    for(i = 0; i < MAX; i++){
        if(frase[i] == letra){
            count++;
        }
        else if(frase[i] == '\0'){
            break;
        }
    }
    return count;
}

int main(){
    char frase[MAX], letra;

    lerFrase(frase);
    printf("Digite uma letra para ver a quantidade na frase: ");
    scanf(" %c", &letra);
    int count = contabilizar(frase, letra);
    printf("A quantidade que %c se repete: %d", letra, count);

    return 0;
}
#include <stdio.h>
#include <string.h>
#define MAX 500

void lerString(char frase[MAX]){
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);
}

int contabilizar(char frase[MAX]){
    int i, count = 1, n;
    n = strlen(frase);

    for(i = 0; i < n; i++){
        if(frase[i] == ' '){
            count++;
        }
    }
    return count;
}

void separarPalavras(char frase[MAX]){
    int i = 0;

    printf("Palavras linhas por linhas:\n");

    while(frase[i] != '\0'){
        if(frase[i] != ' '){
            printf("%c", frase[i]);
        }
        else{
            printf("\n");
        }
        i++;
    }
    printf("\n");
}


int main(){
    char frase[MAX];
    int count = 0;

    lerString(frase);
    count = contabilizar(frase);
    printf("A quantidade de palavras na frase: %d\n", count);
    separarPalavras(frase);

}
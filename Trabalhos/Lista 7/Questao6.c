#include <stdio.h>
#include <string.h>
#define MAX 500

void lerString(char frase[MAX]){
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);
}

void comparacao(char frase1[MAX], char frase2[MAX], int n){
    int i;

    if(strlen(frase1) == strlen(frase2)){
        printf("As frases sao iguais ate o tamanho comparado!\n");
    }
    else{
        printf("As frase nao sao iguais no tamanho!\n");
    }

    for(i = 0; i < n; i++){
        if(frase1[i] != frase2[i]){
            printf("elas nao sao iguais!\n");
            return;
        }
    }
}

int main(){
    char frase1[MAX], frase2[MAX];
    int n;

    lerString(frase1);
    lerString(frase2);
    if(strlen(frase1) < strlen(frase2)){
        n = strlen(frase1);
    }
    else{
        n = strlen(frase2);
    }
    comparacao(frase1, frase2, n);
}
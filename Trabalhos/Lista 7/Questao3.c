#include <stdio.h>
#include <string.h>
#define MAX 500

void lerString(char frase[MAX]){
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

}

void criptografar(char frase[MAX]){
    int i, n;
    n = strlen(frase);

    for(i = 0; i < n; i++){
        if(frase[i] >= 'a' && frase[i] <= 'z'){
            frase[i] = 'z' - (frase[i] - 'a');
        }
        else if(frase[i] >= 'A' && frase[i] <= 'Z'){
            frase[i] = 'Z' - (frase[i] - 'A');
        }
    }
}

void imprimirString(char frase[MAX]){
    printf("Texto Criptografado: %s\n", frase);
}

int main(){
    char frase[MAX];

    lerString(frase);
    criptografar(frase);
    imprimirString(frase);

}
#include <stdio.h>

void verificacao(char caracter){
    if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
       caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
        printf("Eh vogal!");
       }
    else{
        printf("Nao eh vogal!");
    }
}

int main(){
    char caracter;

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);
    verificacao(caracter);
}
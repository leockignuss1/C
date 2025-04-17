#include <stdio.h>

int main(){
    
    char caracter;

    
    printf("Digite um caracter \n");
    scanf("%c", &caracter);
    
    if(caracter == 'a' || caracter == 'A' || caracter == 'e' || caracter == 'E' ||
        caracter == 'i' || caracter == 'I' || caracter == 'o' || caracter == 'O' ||
        caracter == 'u' || caracter == 'U'){
        printf("Seu caracter é uma vogal");
    }
        else{
            printf("Seu caracter não é uma vogal");
        }
    
    return 0;
}
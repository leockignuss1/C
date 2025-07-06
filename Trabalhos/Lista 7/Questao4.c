#include <stdio.h>
#include <string.h>
#define MAX 500

void lerString(char frase[MAX]){
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);
}

void asterisco(char frase[MAX]){
    int i, n;
    n = strlen(frase);

    for(i = 0; i < n; i++){
        if(frase[i] >= '0' && frase[i] <= '9'){
            frase[i] = '*';
        }
    }
}

int main(){
    char frase[MAX];

    lerString(frase);
    asterisco(frase);
    printf("%s", frase);
}
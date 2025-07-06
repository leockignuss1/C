#include <stdio.h>
#include <string.h>
#define MAX 500

void lerString(char frase[MAX]){
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);
}

int countMax(char frase[MAX]){
    int i, n, countmax=0;
    n = strlen(frase);

    for(i = 0; i < n; i++){
        if(frase[i] >= 'A' && frase[i] <= 'Z'){
            countmax++;
        }
    }
    return countmax;
}

int countMin(char frase[MAX]){
    int i, n, countmin=0;
    n = strlen(frase);

        for(i = 0; i < n; i++){
        if(frase[i] >= 'a' && frase[i] <= 'z'){
            countmin++;
        }
    }
    return countmin;
}

int main(){
    char frase[MAX];

    lerString(frase);
int countmin = countMin(frase);
int countmax = countMax(frase);

printf("A quantidade de caracteres maiusculos: %d\n", countmax);
printf("A quantidade de caracteres minusculos: %d\n", countmin);

    
}
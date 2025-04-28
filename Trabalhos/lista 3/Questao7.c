#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {           // Para cada linha
        for(j = 1; j <= i; j++) {       // Imprime asteriscos até o número da linha
            printf("*");
        }
        printf("\n");                   // Quebra de linha após cada linha de asteriscos
    }

    return 0;
}



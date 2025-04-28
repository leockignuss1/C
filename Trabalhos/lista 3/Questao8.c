#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0; // Se tiver algum divisor além de 1 e ele mesmo, não é primo
                break;
            }
        }
    }

    if (primo) {
        printf("%d eh um numero primo.\n", num);
    } else {
        printf("%d nao eh um numero primo.\n", num);
    }

    return 0;
}
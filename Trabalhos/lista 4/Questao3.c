#include <stdio.h>

int somaMultiplos(int limite, int multiplicador){
    int i, soma;
    for(i = 0; i < limite; i += multiplicador){
        if(i % multiplicador == 0){
            printf("%d ", i);
            soma += multiplicador;
        }
    }
    return soma;
}

int main(){
    int limite, multiplicador, result;

    printf("Digite um valor para o limite e o multiplicador: ");
    scanf("%d%d", &limite, &multiplicador);
    result = somaMultiplos(limite, multiplicador);
    printf("%d", result);
}
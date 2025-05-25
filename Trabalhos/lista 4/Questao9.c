#include <stdio.h>

int multiplicacao(int x, int y){
    int resultado = 0, i;
    for(i = 0; i < y; i++){
        resultado += x;
    }
    return resultado;
}

int main(){
    int x, result, y;

    printf("Digite um valor para x e y: ");
    scanf("%d%d", &x, &y);
    result = multiplicacao(x, y);
   printf("Resultado: %d\n", result);
}
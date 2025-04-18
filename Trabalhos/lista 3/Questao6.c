#include <stdio.h>

int main(){

    int x, y, z, result, teste;

    printf("Digite numeros inteiros para multiplicar x e y: ");
    scanf("%d%d", &x, &y);

    z = x + x;
    result = z;

    for(teste = 3; teste <= y; teste++){
        result = result + x;
    }

    printf("%d . %d = %d ", x, y, result);

    return 0;
}
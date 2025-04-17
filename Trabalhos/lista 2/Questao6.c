#include <stdio.h>

int main(){

    int x, y, z, menor;

    printf("Digite 3 numeros inteiros \n");
    scanf("%d%d%d", &x, &y ,&z);

    menor = x;

    if(y < menor){
        menor = y;
    }

    if(z < menor){
        menor = z;
    }

    printf("O menor numero seria o %d", menor);

    return 0;
}
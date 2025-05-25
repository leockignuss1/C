#include <stdio.h>

void parametro(int x, int y){
    int i;
    for(i = x; i <= y; i++){
        if(i % 3 == 0){
            printf("%d", i);
            if(i < y){
                printf(" | ");
            }
        }
    }
    printf("\n");
}


int main(){
    int x, y;

    printf("Digite os parametros, x e y: ");
    scanf("%d%d", &x, &y);
    parametro(x, y);

    return 0;
}
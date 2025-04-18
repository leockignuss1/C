#include <stdio.h>

int main (){

    int x = 0, y = 0, count = 0;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &x, &y);

    printf("O intervalo entre X e Y:");

    for(count = x+1; count < y; count++){

        if(count % 5 == 2){
        printf("%d ", count);
        }
            else if(count % 5 == 3){
                printf("%d ", count);
            }
    }
    
    return 0;
}
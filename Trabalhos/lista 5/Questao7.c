#include <stdio.h>
#define MAX 11

int main(){
    int i, vet[MAX];
   
    for(i = 0; i < MAX - 1; i++){
        printf("\nDigite o termo %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for(i = 5; i < MAX - 1; i++){
        printf("%d ", vet[i]);
    }
    for(i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }
   
    return 0;
}
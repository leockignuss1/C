#include <stdio.h>

int main(){
    
    float n1, n2, n3;
    
    printf("digite 3 numeros positivos \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    float mediaAritmetica = (n1 + n2 + n3) / 3;
    
    int total = 0;
    
    if(n1 >= mediaAritmetica){
        total++;
    }
    
    if(n2 >= mediaAritmetica){
        total++;
    }
    
    if(n3 >= mediaAritmetica){
        total++;
    }
    
    printf("Total de numeros acima da media: %d \n", total);
    
    return 0;
}
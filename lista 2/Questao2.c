#include <stdio.h>

int main(){
    
    int numero;
   
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero > 0){
        printf("Seu numero é positivo e ");
    }
        else if(numero < 0){
            printf("Seu numero é negativo e ");
        }
            else{
                printf("Seu numero é zero e ");
            }
            
    if(numero % 2 == 0){
        printf("par");
    }
        else{
            printf("impar");
        }
        
    return 0;
}
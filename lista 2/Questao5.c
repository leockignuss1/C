#include <stdio.h>

int main(){

    int x, y, operacao;

    printf("Escolha um valor para x e para y: \n");
    scanf("%d%d", &x, &y);

    printf("Escolha uma das operaçoes listadas: \n 1.Media Aritmetica \n 2.Subtracao \n 3.Multiplicacao \n 4.Divisao \n operacao:");
    scanf("%d", &operacao);

    float mediaAritmetica, divisao, subtracao, multiplicacao;

    if(operacao == 1){
        mediaAritmetica = (x + y) / 2;
        printf("A Media Aritmetica de %d e %d: %.2f", x, y, mediaAritmetica);
    }
        else if(operacao == 2){
            subtracao = (x - y);
            printf("A subtracao de %d - %d: %.2f", x, y, subtracao);
        }

        else if(operacao == 3){
            multiplicacao = (x * y);
            printf("A multiplicacao de %d * %d: %.2f", x, y, multiplicacao);
        }
        
        else if(operacao == 4){
                if(y != 0){
                 divisao = (float)x / y;
                 printf("A divisao de %d / %d: %.2f", x, y, divisao);
                }
                else{
                    printf("Nao e possivel a divisao por 0");
                }  
        }
    else {
        printf("É necessario a utilizar uma das operacoes listadas");
    }


    return 0;
}
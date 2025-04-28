#include <stdio.h>

int main(){

    int codigo;
    float encomenda_mensal, preco_comb = 3.77, aumento, pago_comb;
    char continuar;

    do{
        printf("Digite o codigo do posto que sera analisados: ");
        scanf("%d", &codigo);
        printf("Qual a quantidade de combustivel(L) encomendado mensalmente pelo posto (%d)? \n", codigo);
        scanf("%f", &encomenda_mensal);
        pago_comb = preco_comb * encomenda_mensal;

        if(encomenda_mensal <= 50000){
            aumento = preco_comb * 1.27;
            printf("-------RESUMO------- \n");
            printf("Preco a ser pago pelo posto: %0.2f reais \n", pago_comb);
            printf("Preco sem o aumento: %0.2f reais \n", preco_comb);
            printf("Preco com o aumento: %0.2f reais \n", aumento);
        
        }    
            else{
                aumento = preco_comb * 1.18;
                printf("-------RESUMO------- \n");
                printf("Preco a ser pago pelo posto: %0.2f reais \n", pago_comb);
                printf("Preco sem o aumento: %0.2f reais \n", preco_comb);
                printf("Preco com o aumento: %0.2f reais \n", aumento);
            }
            preco_comb = 3.77;
            printf("Adicionar outro posto? (S or N)");
            scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');


    printf("Volte sempre :)");

    return 0;

}


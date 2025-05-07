#include <stdio.h>

int main(){

    char pagamento, cartao, confirmar, nota;
    int i = 1, qnts_produtos = 0, dinheiro, CPF, somaqnts_produtos;
    float valor, soma = 0, troco;

    printf("*Promocao atacado: 15%% de desconto na leva de 5 ou mais do mesmo produto*. \n");

    while(i){
    printf("Digite o valor do produto %d: ", i);
    scanf("%f", &valor);
    
    if(valor == 0){
        break;
    }
    printf("Digite a quantidade: ");
    scanf("%d", &somaqnts_produtos);

    if(somaqnts_produtos >= 5 ){
        valor *= somaqnts_produtos;
        valor *= 0.85;
    }
    else{
        valor *= somaqnts_produtos;
    }
    
    soma += valor;
    qnts_produtos += somaqnts_produtos;
    i++;
}

printf("A quantidade de produtos comprados: %d \n", qnts_produtos);
printf("O valor a ser pago: %0.2f \n", soma);
printf("------------------------ \n");
printf("CPF na nota? (S/N)\n");
scanf(" %c", &nota);
switch(nota){
    case 'S':
    case 's':
        printf("Digite o CPF: ");
        scanf("%d", &CPF);
        break;
    case 'N':
    case 'n':
        printf("Sem problemas! Prossiga: \n");
        break;
}

printf("Digite a forma de pagamento: \n Cartao = 'C' \n Dinheiro = 'D'");
scanf(" %c", &pagamento);

switch(pagamento) {
    case 'C':
    case 'c':
        printf("\nCredito = 'C' \nDebito = 'D'\n");
        scanf(" %c", &cartao);

        switch(cartao){
            case 'C':
            case 'c':
                printf("Voce escolheu pagar com Cartao de Credito! o valor a ser cobrado: %0.2f \n", soma);
                printf("Confirmar? (S/N)\n");
                scanf(" %c", &confirmar);
                switch(confirmar){
                    case 'S':
                    case 's':
                        printf("Muito obrigado, volte sempre!\n");
                        break;
                    case 'N':
                    case 'n':
                        printf("Pagamento recusado!\n");
                        break;
                    default:
                        printf("Opcao invalida!\n");
                        break;
                }
                break;
            case 'D':
            case 'd':
                printf("Voce escolheu pagar com Cartao de Debito! o valor a ser cobrado: %0.2f\n", soma);
                printf("Confirmar? (S/N)\n");
                scanf(" %c", &confirmar);
                switch(confirmar){
                    case 'S':
                    case 's':
                        printf("Muito obrigado, volte sempre!\n");
                        break;
                    case 'N':
                    case 'n':
                        printf("Pagamento recusado!\n");
                        break;
                    default:
                        printf("Opcao invalida!\n");
                        break;
                }
                break;
            default:
                printf("Opcao de cartao invalida!\n");
                break;
        }
        break;

    case 'D':
    case 'd':
        printf("Voce escolheu pagar com dinheiro! O valor a ser cobrado: %0.2f \n", soma);
        printf("Qual o valor da entrada em R$: ");
        scanf("%d", &dinheiro);
        troco = dinheiro - soma;
        printf("O troco a ser recebido: R$%0.2f\n", troco);
        break;     

    default:
        printf("Opcao de pagamento invalida!\n");
        break;
}

printf("\n-----------Resumo-----------\n");
printf("A quantidade de produtos comprados: %d \n", qnts_produtos);
printf("O valor a ser pago: %0.2f \n", soma);
printf("Troco recebido: %0.2f \n", troco);
printf("CPF: %d\n", CPF);
printf("Agradecemos a preferencia! <3");


return 0;
}
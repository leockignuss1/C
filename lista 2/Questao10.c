#include <stdio.h>

int main(){

    char Combustivel;
    float litros, preco_gasolina, preco_etanol;

    printf("Como deseja abastecer seu veiculo? \n G: Gasolina(R$5,80/L) \n E: Etanol(R$4,50/L) \n");
    scanf("%c", &Combustivel);

    printf("Quantos Litros deseja abastecer?\n");
    scanf("%f", &litros);

    preco_gasolina = (5.80 * litros);
    preco_etanol = (4.50 * litros);

    float preco, desconto;

    if(litros <= 20){
        if(Combustivel == 'G' || Combustivel == 'g'){
            desconto = preco_gasolina * 0.05;
            preco = preco_gasolina - desconto;
        }
        else if(Combustivel == 'E' || Combustivel == 'e'){
            desconto = preco_etanol * 0.04;
            preco = preco_etanol - desconto;
        }
    }

    if(litros > 20){
        if(Combustivel == 'G' || Combustivel == 'g'){
            desconto = preco_gasolina * 0.09;
            preco = preco_gasolina - desconto;
        }
        else if(Combustivel == 'E' || Combustivel == 'e'){
            desconto = preco_etanol * 0.07;
            preco = preco_etanol - desconto;
        }
    }

    printf("\n--- RESUMO DO ABASTECIMENTO ---\n");

    if (Combustivel == 'G' || Combustivel == 'g') {
        printf("Combustivel: Gasolina\n");
        printf("Preco sem desconto: R$%.2f\n", preco_gasolina);
    } else if (Combustivel == 'E' || Combustivel == 'e') {
        printf("Combustivel: Etanol\n");
        printf("Preco sem desconto: R$%.2f\n", preco_etanol);
    } else {
        printf("Tipo de combustivel invalido.\n");
        return 1;
    }

    printf("Desconto aplicado: R$%.2f\n", desconto);
    printf("Preco final a pagar: R$%.2f\n", preco);

    return 0;
}
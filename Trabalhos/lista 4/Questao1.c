#include <stdio.h>

float parametro(float peso, float altura){
    float imc;
    imc = peso/(altura*altura);
    return imc;
}

void classificacao(float imc){
    if(imc < 18.5){
        printf("Abaixo do peso ");
    }
    else if(imc <= 24.9){
        printf("Peso normal ");
    }
    else if(imc <= 29.9){
        printf("Sobrepeso ");
    }
    else{
        printf("Obeso ");
    }
}

int main(){
    float peso, altura, result;

    printf("Digite seu peso e a altura: ");
    scanf("%f%f", &peso, &altura);

    result = parametro(peso, altura);
    printf("Calculo do seu IMC: %0.2f \n", result);
    classificacao(result);


    return 0;
}
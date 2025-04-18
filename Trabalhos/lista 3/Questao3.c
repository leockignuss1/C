#include <stdio.h>
#include <math.h>

int main(){

    double S = 0;

    for(int i = 1, d = 1; i <= 99 && d <= 50; i += 2, d++){
        double numerador = 1 + i;
        double denominador = 1 + d;
        S += numerador / denominador;
    }

    printf("Resultado: %.2lf", S);



}
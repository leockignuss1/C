#include <stdio.h>
#include <math.h>

int main() {
    double S = 0;

    for (int i = 0; i < 100; i++) {
        double numerador = pow(2, i);   
        double denominador = i + 1;      
        S += numerador / denominador;   
    }

    printf("O valor de S é: %.2f\n", S); 

    return 0;
}
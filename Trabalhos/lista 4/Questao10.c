#include <stdio.h>
#include <math.h>
// delta = b**2 - 4.a.c
// raiz = -b +- sqrt(delta)/2.a
float calculoDelta(float a, float b, float c){
    float delta;
    delta = (b * b) - 4 * a * c;
    printf("Delta: %0.2f \n", delta);
    return delta;
}

void calculoRaiz(float a, float b, float delta){
    float x, x1, x2;
    if(delta < 0){
        printf("Nao existem raizes reais!");
    }
    else if(delta == 0){
        x = -b / (2 * a);
        printf("Raiz unica: %0.2f \n", x);
    }
    else{
        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        printf("Raizes reais: \nx1 = %0.2f \nx2 = %0.2f ", x1, x2);
    }
}

int main(){
    float a, b, c, delta;

    printf("Formula do Delta: (b * b) - 4 * a * c \n");
    printf("Digite valores para a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);
    delta = calculoDelta(a,b,c);
    calculoRaiz(a,b,delta);
}
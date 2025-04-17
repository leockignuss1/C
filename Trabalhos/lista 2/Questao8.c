#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, x1, x2;

    printf("Equação de segundo grau (ax² + bx + c = 0) \n");

    printf("Digite os tres coeficiente: \n");
    scanf("%f%f%f", &a, &b, &c);

    if(a == 0){
        printf("O coenficiente 'a' nao pode ser 0");
    }

    delta = ((b * b) - 4 * a * c);

    printf("O delta calculado: %.2f \n", delta);

    if(delta < 0){
        printf("Nao existem raizes reais");
    }

        else if(delta == 0){
            x1 = -b / 2 * a;
            printf("Houve apenas uma raiz: \nx1 = %0.2f", x1);

        }

        else{
            x1 = (-b + sqrt(delta)) / 2*a;
            x2 = (-b - sqrt(delta)) / 2*a;
            printf("x1 = %0.2f\n", x1);
            printf("x2 = %0.2f", x2);
        }


    return 0;
}




//sqrt é o comando para calcular raiz quadrada
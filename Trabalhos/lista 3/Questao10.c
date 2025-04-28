#include <stdio.h>

int main(){

    int total_competidores, i, j;
    float nota, soma, maior, menor, nota_final;

    printf("Digite o total de competidores: ");
    scanf("%d", &total_competidores);

    for(i = 1; i <= total_competidores; i++){
        soma = 0;
        menor = 10;
        maior = 0;

        printf("\n Competidor %d \n", i);
        
        for(j = 1; j <= 5; j++){
            printf("Nota do juiz %d: ", j);
            scanf("%f", &nota);

            soma += nota;

            if(nota > maior) maior = nota;
            if(nota < menor) menor = nota;
        }

        soma = soma - maior - menor;

        nota_final = soma / 3;

        printf("Nota do competidor %d: %0.2f", i, nota_final);
    }
    

    return 0;
}
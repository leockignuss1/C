#include <stdio.h>

int main(){
    
    int gasto;
    int quilometros;
    char categoria;
    
    
    printf("Digite (Em quilometros) a distancia do percurso \n");
    scanf("%d", &quilometros);
    
    printf("Qual das categorias o seu veiculo se encaixa: \n Categoria A: 15km/l \n Categoria B: 12km/l \n Categoria C: 10km/l \n Escolha:");
    getchar();
    scanf("%c", &categoria);
    
    if(categoria == 'A'){
        gasto = quilometros / 15;
        printf("A quantidade de litros gastos foram: %d \n", gasto);  
    }
        else if(categoria == 'B'){
            gasto = quilometros / 12;
            printf("A quantidade de litros gastos foram: %d \n", gasto);
        }
        else if(categoria == 'C'){
            gasto = quilometros / 10;
            printf("A quantidade de litros gastos foram: %d \n", gasto);
        }
        else{
            printf("categoria invalida");
        }
    
    return 0;
}
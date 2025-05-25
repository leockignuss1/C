#include <stdio.h>

int proximoEstado(int estadoAtual){
    switch(estadoAtual){
        case 0:
            return 1;
        case 1:
            return 2;
        case 2:
            return 0;
        default:
            return -1;
    }
}

void exibirEstado(int estado){
    switch(estado){
        case 0:
            printf("Vermelho\n");
            break;
        case 1:
            printf("Verde\n");
            break;
        case 2:
            printf("Amarelo\n"); 
            break;
        default:
            printf("Estado invalido");
            break;
    }
}

int main(){
    int estado, i;

    printf("Escolha o estado inicial (0 = Vermelho, 1 = Verde, 2 = Amarelo): ");
    scanf("%d", &estado);

    if(estado < 0 || estado > 2){
        printf("Estado invalido");
        return 1;
    }

    for(i = 0; i <= 6; i++){
        exibirEstado(estado);
        estado = proximoEstado(estado);
    }


    return 0;
}
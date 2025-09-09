#include <stdio.h>
#include <string.h>

#define MAX_DOSES 4

struct dose {
    int dose;
    char data[11];
    char fabricante[50];
};

struct pessoa {
    char nome[50];
    struct dose doses[MAX_DOSES];
    int totalDoses;
};

struct pessoa registrar_dose(struct pessoa p) {
    if (p.totalDoses >= MAX_DOSES) {
        printf("Limite maximo de 4 doses atingido. Nao eh possivel registrar mais.\n");
        return p;
    }

    printf("\n--- Registrar Nova Dose ---\n");
    printf("Dose #%d\n", p.totalDoses + 1);

    p.doses[p.totalDoses].dose = p.totalDoses + 1;

    printf("Digite a data (dd/mm/aaaa): ");
    fgets(p.doses[p.totalDoses].data, sizeof(p.doses[p.totalDoses].data), stdin);
    p.doses[p.totalDoses].data[strcspn(p.doses[p.totalDoses].data, "\n")] = '\0';

    printf("Digite o fabricante: ");
    fgets(p.doses[p.totalDoses].fabricante, sizeof(p.doses[p.totalDoses].fabricante), stdin);
    p.doses[p.totalDoses].fabricante[strcspn(p.doses[p.totalDoses].fabricante, "\n")] = '\0';

    p.totalDoses++;
    printf("\nDose registrada com sucesso!\n");

    return p;
}

void mostrar_doses(struct pessoa p) {
    if (p.totalDoses == 0) {
        printf("\nNenhuma dose registrada ainda.\n");
        return;
    }

    printf("\n--- Historico de Vacinacao de %s ---\n", p.nome);
    for (int i = 0; i < p.totalDoses; i++) {
        printf("\n--- Dose %d ---\n", p.doses[i].dose);
        printf("Data: %s\n", p.doses[i].data);
        printf("Fabricante: %s\n", p.doses[i].fabricante);
    }
}

int main() {
    struct pessoa p;
    
    // Pergunta o nome da pessoa antes de iniciar o menu
    printf("Digite o nome da pessoa: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';
    
    p.totalDoses = 0;

    int opcao;

    do {
        printf("\n--- Menu de Vacinacao ---\n");
        printf("1. Registrar nova dose de vacina\n");
        printf("2. Mostrar todas as doses\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                p = registrar_dose(p);
                break;
            case 2:
                mostrar_doses(p);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
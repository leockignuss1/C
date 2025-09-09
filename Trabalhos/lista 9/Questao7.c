#include <stdio.h>
#include <string.h>

typedef struct cantina {
    int codigo;
    char nome[100];
    float preco;
} chevette;

int cadastrar_produtos(chevette produtos[]) {
    int n, i;

    printf("Digite o numero de produtos a serem cadastrados: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nCadastro do produto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        getchar();

        printf("Nome: ");
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        getchar();
    }
    return n;
}

void processar_pedidos(chevette produtos[], int total_produtos) {
    int codigo_pedido, quantidade_pedido, i, encontrado;
    float total_a_pagar = 0.0f;

    printf("\n--- Realizar Pedidos ---\n");
    printf("Digite o codigo e a quantidade (digite 0 no codigo para encerrar o pedido).\n");

    while (1) {
        printf("\nCodigo do produto: ");
        scanf("%d", &codigo_pedido);
        getchar();

        if (codigo_pedido == 0) {
            break;
        }

        printf("Quantidade: ");
        scanf("%d", &quantidade_pedido);
        getchar();

        if (quantidade_pedido <= 0) {
            printf("Pedido invalido. Quantidade deve ser positiva.\n");
            continue;
        }

        encontrado = 0;
        for (i = 0; i < total_produtos; i++) {
            if (produtos[i].codigo == codigo_pedido) {
                total_a_pagar += produtos[i].preco * quantidade_pedido;
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Pedido invalido. Produto com codigo %d nao encontrado.\n", codigo_pedido);
        }
    }

    printf("\n--------------------------\n");
    printf("Total a pagar: R$ %.2f\n", total_a_pagar);
}

int main() {
    chevette produtos[50];
    int total_cadastrados;

    total_cadastrados = cadastrar_produtos(produtos);
    processar_pedidos(produtos, total_cadastrados);

    return 0;
}
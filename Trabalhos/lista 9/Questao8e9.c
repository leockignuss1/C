#include <stdio.h>
#include <string.h>
#define MAX 50

struct jogo{
    char nome[50];
    char genero[50];
    char modo[50];
    char plataforma[50];
    int favorito;
    int classificacao;
};

struct escolha{
    
    int escolhaModo;
    int escolhaPlataforma;
};

void registrarJogo(struct jogo game[MAX], struct escolha op[MAX], int n){
    int i;
    for(i = 0; i < n; i++){
        getchar();
        printf("Qual o nome do jogo [%d]? ", i+1);
        fgets(game[i].nome, sizeof(game[i].nome), stdin);
        game[i].nome[strcspn(game[i].nome, "\n")] = 0;
        
        printf("Ele esta entre seus favoritos?\n1-Sim\n2-Nao");
        scanf("%d", &game[i].favorito);
        
        printf("\nQual o genero do jogo [%d]? ", i+1);
        getchar();
        fgets(game[i].genero, sizeof(game[i].genero), stdin);
        game[i].genero[strcspn(game[i].genero, "\n")] = 0;
        
        printf("\nQual o modo do jogo [%d]?\n1-SinglePlayer\n2-Multiplayer\n", i+1);
        scanf("%d", &op[i].escolhaModo);
        
        switch(op[i].escolhaModo){
            case 1:
                strcpy(game[i].modo, "SinglePlayer");
                break;
            case 2:
                strcpy(game[i].modo, "Multiplayer");
                break;
            default:
                printf("Numero invalido!");
        }
        
        printf("\nQual a plataforma ser jogado do jogo [%d]?\n1-Xbox\n2-Pc\n3-Playstation\n4-Nintendo\n", i+1);
        scanf("%d", &op[i].escolhaPlataforma);
        
        switch(op[i].escolhaPlataforma){
            case 1:
                strcpy(game[i].plataforma, "Xbox");
                break;
            case 2:
                strcpy(game[i].plataforma, "Pc");
                break;
            case 3:
                strcpy(game[i].plataforma, "Playstation");
                break;
            case 4:
                strcpy(game[i].plataforma, "Nintendo");
                break;
            default:
                printf("Numero invalido!");
        }
        
        printf("Qual a classificacao do jogo [%d]?\n(1 estrela ate 5 estrelas)\n ", i+1);
        scanf("%d", &game[i].classificacao);
        
        if(op[i].escolhaModo < 1 || op[i].escolhaModo > 2 || op[i].escolhaPlataforma < 1 || op[i].escolhaPlataforma > 4){
            printf("Modo de jogo ou plataforma escolhida incorreta!");
            i--;
        }
    }
}

void leitorJogo(struct jogo game[MAX]){
    int escolha, continuar;
    
        do{
        printf("Qual jogo voce vai querer ler?");
        scanf("%d", &escolha);
        
        printf("O jogo escolhido: %d", escolha);
        
        printf("\nNome: %s", game[escolha-1].nome);
        printf("\nGenero: %s", game[escolha-1].genero);
        printf("\nModo: %s\n", game[escolha-1].modo);
        printf("\nPlataforma: %s\n", game[escolha-1].plataforma);
        printf("\nClassificacao: %d\n", game[escolha-1].classificacao);
        
        printf("\nEscolher outro?\nSim = 1\nNao = 0\n");
        scanf("%d", &continuar);
        
    }while(continuar == 1);
}

void leitorGenero(struct jogo game[MAX], int n, char generoEscolhido[MAX]){
        int i;
        for(i = 0; i < n; i++){
        if(strcmp(generoEscolhido, game[i].genero) == 0){
            
        printf("\nNome: %s", game[i].nome);
        printf("\nGenero: %s", game[i].genero);
        printf("\nModo: %s\n", game[i].modo);
        printf("\nPlataforma: %s\n", game[i].plataforma);
        printf("\nClassificacao: %d\n", game[i].classificacao);
        printf("\n======================================\n");
            
        }
    }
    
}

void leitorFavoritos(struct jogo game[MAX], int n){
    int i;
        for(i = 0; i < n; i++){
        if(game[i].favorito == 1){
            
        printf("\nNome: %s", game[i].nome);
        printf("\nGenero: %s", game[i].genero);
        printf("\nModo: %s\n", game[i].modo);
        printf("\nPlataforma: %s\n", game[i].plataforma);
        printf("\nClassificacao: %d\n", game[i].classificacao);
        printf("\n======================================\n");
            
        }
    }
}

void leitorClassificacao(struct jogo game[MAX], int n, int escolhaClass){
    int i;
        for(i = 0; i < n; i++){
        if(game[i].classificacao == escolhaClass){
            
        printf("\nNome: %s", game[i].nome);
        printf("\nGenero: %s", game[i].genero);
        printf("\nModo: %s\n", game[i].modo);
        printf("\nPlataforma: %s\n", game[i].plataforma);
        printf("\nClassificacao: %d\n", game[i].classificacao);
        printf("\n======================================\n");
            
        }
    }
}

int main(){
    struct jogo game[MAX];
    struct escolha op[MAX];
    int i, n;
    char generoEscolhido[MAX];
    int escolhaUsuario = 0, escolhaClass = 0, continuar = 1;
    
    printf("Quantos jogos serao registrados?");
    scanf("%d", &n);
    
    registrarJogo(game, op, n);
    
    while(continuar) {
    printf("Escolha uma opcao:\n1-Genero\n2-Jogo especifico\n3-Classificacao\n4-Favoritos\n0-Sair\n");
    scanf("%d", &escolhaUsuario);
    getchar(); 
    
    switch(escolhaUsuario) {
        case 1:
            printf("Qual genero?");
            fgets(generoEscolhido, sizeof(generoEscolhido), stdin);
            generoEscolhido[strcspn(generoEscolhido, "\n")] = 0; 
            leitorGenero(game, n, generoEscolhido);
            break;
        case 2:
            leitorJogo(game);
            break;
        case 3:
            printf("Qual classificacao deseja buscar? (1 a 5): ");
            scanf("%d", &escolhaClass);
            leitorClassificacao(game, n, escolhaClass);
            break;
        case 4:
            leitorFavoritos(game, n);
            break;
        case 0:
            continuar = 0;
            break;
        default:
            printf("Opcao invalida!\n");
    }
}


}
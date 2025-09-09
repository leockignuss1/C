#include <stdio.h>
#include <string.h>

#define MAX 50

struct video{
    char titulo[100];
    int visualizacao;
};

int anotar(struct video videos[MAX], int n){
    int maior = 0, i;
    
    for(i = 0; i < n; i++){
        if(videos[i].visualizacao > maior){
            maior = videos[i].visualizacao;
        }
    }
    return maior;
}

void exibir(struct video videos[MAX], int maior, int total){
    
    printf("\n--- Resumo visualização ---\n");
    printf("Maior visualizacao: %d\n", maior);
    printf("Total de visualizacao: %d\n", total);
}

void ranking(struct video videos[MAX], int n){
    struct video temp;
    
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(videos[j].visualizacao > videos[i].visualizacao){
                temp = videos[i];
                videos[i] = videos[j];
                videos[j] = temp;
            }
        }
    }
    
    printf("\n--- Ranking dos vídeos ---\n");
    for(int i = 0; i < n; i++){
    printf("Top %d: %s (%d visualizações)\n", i+1, videos[i].titulo, videos[i].visualizacao);
    }
}


int main(){
    struct video videos[MAX];
    int n, total = 0, i;
    
    printf("Qual a quantidade de videos?");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        getchar();
        printf("Titulo do video [%d]: ", i+1);
        fgets(videos[i].titulo, sizeof(videos[i].titulo), stdin);
        videos[i].titulo[strcspn(videos[i].titulo, "\n")] = '\0';
        
        printf("Numero de visualizacoes:");
        scanf("%d", &videos[i].visualizacao);
        getchar();
    }
    
    for(i = 0; i < n; i++){
        total += videos[i].visualizacao;
    }
    
    int maior = anotar(videos, n);
    exibir(videos, maior, total);
    ranking(videos, n);
    
    return 0;
}
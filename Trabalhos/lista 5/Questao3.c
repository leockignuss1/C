#include <stdio.h>
#define MAX 30

void Comparacao(int vetProgI[], int alunosProgI, int vetProgII[], int alunosProgII){
    int i, j;
        for(i = 0; i < alunosProgI; i++){
            for(j = 0; j < alunosProgII; j++){
                if(vetProgI[i] == vetProgII[j]){
                    printf("Matricula %d esta tanto em ProgI quanto ProgII\n", vetProgI[i]);
            }
        }
    }
}

int main(){
    int i, alunosProgI, alunosProgII, ProgramacaoUm[MAX], ProgramacaoDois[MAX];
    
    printf("Quantos alunos estao cursando programacao 1? ");
    scanf("%d", &alunosProgI);
    printf("\nQuantos alunos estao cursando programacao 2? ");
    scanf("%d", &alunosProgII);

    for(i = 0; i < alunosProgI; i++){
        printf("\nDigite a matricula do aluno %d: ", i + 1);
        scanf("%d", &ProgramacaoUm[i]);
    }
    for(i = 0; i < alunosProgII; i++){
        printf("\nDigite a matricula do aluno %d: ", i + 1);
        scanf("%d", &ProgramacaoDois[i]);
    }

    Comparacao(ProgramacaoUm, alunosProgI, ProgramacaoDois, alunosProgII);

}
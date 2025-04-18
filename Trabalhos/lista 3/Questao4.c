#include <stdio.h>
#include <math.h>

int main(){

    int teste, qts_alunos, aprovados = 0, nota, soma_notas = 0;
    double media, reprovados = 0, exame = 0, perc_exame, perc_reprova;

    printf("Quantos alunos ha na turma? \n");
    scanf("%d", &qts_alunos);

    printf("A prova final foi concluida! Veja quantos alunos foram aprovados, reprovados ou ficaram de exame \n");
    
    for(teste = 1; teste <= qts_alunos; teste++){
        printf("Qual a nota do aluno %d? \n", teste);
        scanf("%d", &nota);

        soma_notas += nota;
        
        if(nota >= 7){
            printf("Aprovado\n");
            aprovados++;
        }
            else if(nota < 4){
                printf("Reprovado\n");
                reprovados++;
            }
        else{
            printf("Exame\n");
            exame++;
        } 

    }

    media = soma_notas / (double)qts_alunos;
    perc_exame = (exame / (double) qts_alunos) * 100;
    perc_reprova = (reprovados / (double) qts_alunos) * 100;

    printf("----RESULTADOS---- \n");
    printf("Media da turma: %.2lf \n", media);
    printf("Quantidade de alunos Aprovados: %d \n", aprovados);
    printf("Percentual de alunos Reprovados: %.2lf% \n", perc_reprova);
    printf("Percentual de alunos de Exame: %.2lf% \n", perc_exame);

    return 0;
}
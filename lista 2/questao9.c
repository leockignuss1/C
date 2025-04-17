#include <stdio.h>

int main(){

    char Jogo, Solo, Horario;


    printf("Responda esse questionario para saber qual tipo de gamer voce se encaixa: \n");
    
    
    printf("Voce prefere jogar:\n(M) Minecraft\n(V) Valorant\n");
    scanf(" %c", &Jogo);

    printf("Voce prefere jogar:\n(S) Sozinho\n(A) Acompanhado\n");
    scanf(" %c", &Solo);

    printf("Voce prefere jogar:\n(N) Noite\n(D) Dia\n");
    scanf(" %c", &Horario);
   
    if(Jogo == 'M' || Jogo == 'm'){
        printf("Voce e um Gamer Casual ");
    }
        else if(Jogo == 'V' || Jogo == 'v'){
            printf("Voce e um Gamer Competitivo ");
        }

    if(Solo == 'S' || Solo == 's'){
        printf("Solitario ");
    }
        else if(Solo == 'A' || Solo == 'a'){
            printf("Autofobico ");
        }

    if(Horario == 'N' || Horario == 'n'){
        printf("Noturno");
    }
        else if(Horario == 'D' || Horario    == 'd'){
            printf("Diurno");
        }



    return 0;
}

// if(Jogo == 'M' || Jogo == 'm' && Solo == 'S' || Solo == 's' && Horario == 'N' || Horario == 'n'){
//   printf("Gamer casual noturno");
//}
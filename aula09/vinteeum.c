// PUCRS/FACIN
// Laboratório de Programação I
// marco.mangan@pucrs.br
// davi.farias@acad.pucrs.br
//francine.monteiro@acad.pucrs.br
//douglas.carvalho.01@acad.pucrs.br
//enrique.martinez@acad.pucrs.br
//thiago.santos.008@acad.pucrs.br
// rodrigo.gon95@gmail.com
// rodrigo.zaparoli@acad.pucrs.br
// gabriel.waskiewicz@acad.pucrs.br
// albani.pazzim@acad.pucrs.br
// rodrigo.oliveira.010@acad.pucrs.br
// artur.leal@acad.pucrs.br
//matheus.pompeo@acad.pucrs.br
// Jogo de Vinte e Um
// https://pt.wikipedia.org/wiki/Blackjack

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n1,n2,v1,v2,v3,r1,r2,a1,a2,l1,l2,p1,p2,p3,c1,c2;
    int saldo;
    v3=0;
    p3=0;
    saldo = 100;

    printf("Jogo de Vinte e Um, (c) 2015\n");
    printf("============================\n");
    srand(time(NULL));

    while (saldo >= 5)
    {

        printf ("Jogador 1.\n");
        printf ("Seu saldo é R$ %i.\n", saldo);

        printf("carta 1.\n");
        v1 = rand() % 13 + 1;
        if(v1>10)
        {
            p1=10;
        }
        else if( v1==1)
        {
            printf("Carta vale 10? - 1 = SIM e 0 = NÃO\n");
            scanf("%d",&a2);
            if(a2 == 1)
                p1=10;
            else
                p1=1;

        }

        else
        {
            p1=v1;
        }
        printf("%d\n", v1);
        printf ("carta 2.\n");
        v2 = rand() % 13 + 1;
        if (v2>10)
        {
            p2=10;

        }
        else if( v2==1)
        {
            printf("Carta vale 10? - 1 = SIM e 0 = NÃO\n");
            scanf("%d",&a2);
            if(a2 == 1)
                p2=10;
            else
                p2=1;

        }

        else
        {
            p2=v2;
        }
        printf("%d\n", v2);

        printf("Gostaria de uma terceira carta? \n 1- SIM, 0- NÃO\n");
        scanf("%d", &a1);
        if(a1 == 1) {
            v3= rand() % 13 + 1;
            printf("Carta 3.\n");
            printf("%d\n", v3);
            if(v3>10)
            {
                p3=10;
            }
            else
            {
                p3=v3;
            }
        }
        printf("Total Jogador 1\n");
        r1 = p1 + p2 + p3 ;
        printf("%d\n", r1);

        printf ("Mesa.\n\n");
        printf("carta 1.\n");
        n1 = rand() % 13 + 1;
        if(n1>10) {
            c1=10;
        }
        else c1=n1;

        printf("%d\n", n1);
        printf ("carta 2.\n");
        n2 = rand() % 13 + 1;
        if (n2>10) c2=10;
        else c2=n2;
        printf("%d\n", n2);
        printf("Total Mesa\n");
        r2 = c1 + c2;
        printf("%d\n", r2);



        if(r1 <= 21 && r2 <= 21 ) {
            if(r1 > r2) {
                printf("Jogador 1 Venceu\n");
                saldo = saldo + 5;
            } else {
                printf("Mesa Venceu\n");
                saldo = saldo - 5;

            }
        }	else if(r1 > 21) {
            printf("Jogador perdeu\n");
            saldo = saldo - 5;

        } else  if(r2 > 21) {
            printf("A mesa perdeu\n");
            saldo = saldo + 5;
        }

        int a3;
        printf("Quer continuar? 1 = SIM e 0 = NÃO\n");
        scanf("%d",&a3);
        if(a3 != 1)
            break;


    } // while

    printf("*FIM*\n");
    return 0;
}

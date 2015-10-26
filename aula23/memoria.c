#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4

void gerar(int m[MAX][MAX]);
void zerar(int m[MAX][MAX]);
void embaralhar(int m[MAX][MAX]);
void mostrar(int m[MAX][MAX]);

/*
  Gera uma matriz com (MAX * MAX ) / 2 pares de números.
  Ex: para MAX = 4
    1 2 3 4
    5 6 7 8
    1 2 3 4 
    5 6 7 8
  MAX deve ser um número par: 2, 4, 6, 8...
*/
void gerar(int m[MAX][MAX])
{
    int i, j;
    int v = 1;
    for ( i = 0 ; i < MAX ; i++) 
        for ( j = 0 ; j < MAX ; j++) 
        {
            if (v == MAX * MAX / 2 + 1)
                v = 1;
            m[i][j] = v++;
        }
}

void zerar(int m[MAX][MAX])
{
    int i, j;
    for ( i = 0 ; i < MAX ; i++) 
        for ( j = 0 ; j < MAX ; j++) 
            m[i][j] = 0;
}


/*
  Embaralha o conteúdo da matriz.
  100 valores tem sua posição trocada com
  outros 100 valores na matriz.
  As coordenadas (x, y) de cada par da troca são
  geradas aleatoriamente.
*/
void embaralhar(int m[MAX][MAX])
{
    int x1, y1, x2, y2;
    int k;
    srand(time(NULL));
    for ( k = 0 ; k < 100 ; k++)
    {
        x1 = rand() % 4;
        y1 = rand() % 4;
        x2 = rand() % 4;
        y2 = rand() % 4;

        int tmp = m[x1][y1];
        m[x1][y1] = m[x2][y2];
        m[x2][y2] = tmp;
        // TODO: trocar( &(m[rand() % 4][rand() % 4]), &(m[rand() % 4][rand() % 4]) );
    }
}

/*
  Mostra o conteúdo da matriz na tela.
*/
void mostrar(int m[MAX][MAX])
{
    int i, j;
    for ( i = 0 ; i < MAX ; i++) 
    {
        for ( j = 0 ; j < MAX ; j++)
            printf("%i ", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int r[MAX][MAX];
    int m[MAX][MAX];
 
    gerar(r);
    embaralhar(r);
    zerar(m);

    mostrar(r);
    mostrar(m);

    return 0;
}

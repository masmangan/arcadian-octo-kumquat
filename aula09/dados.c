// PUCRS/FACIN
// Laboratório de Programação I
// marco.mangan@pucrs.br

// Simulação do lançamento de um dado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int v;

	printf("Jogo de Dados, (c) 2015\n");
	printf("=======================\n");

	srand(time(NULL));

	v = rand() % 6 + 1;
	printf("%d\n", v);

	printf("*FIM*\n");

	return EXIT_SUCCESS;
}

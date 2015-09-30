#include <stdio.h>
#include "rotina.h"

int main()
{
	float n, d;

	cabecalho("Calcular o dobro de um número");

	printf("Informe um valor:");
	scanf("%f", &n);
		
	d = dobrar( n );

	printf("\nO dobro de %f é %f.\n\n", n, d);

	rodape("FIM");

	return 0;
}



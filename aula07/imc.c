// PUCRS/FACIN Laboratório de Programação I
// 2015/2
// marco.mangan@pucrs.br
#include <stdio.h>
#include <math.h>

int main(void)
{
	float massa;
	float altura;
	float imc;

	printf("CÁLCULO DE ÍNDICE DE MASSA CORPORAL\n");
	printf("===================================\n\n");

	printf("Informe a massa em quilogramas (kg):\n");
	scanf("%f", &massa);

	printf("Informe a altura em metros (m):\n");
	scanf("%f", &altura);

	imc = massa / powf(altura, 2.0f);

	printf("MASSA=%.1f kg\n", massa);
	printf("ALTURA=%.2f m\n", altura);
	printf("IMC=%.3f m\n", imc);
	// normal 18,5 até 24,9

	if (imc < 18.5)
	{
		printf("Abaixo do peso normal.\n");
	}
	else if (imc <= 24.9)
	{
		printf("Peso normal.\n");
	}
	else
	{
		printf("Acima do peso normal.\n");
	}

	printf("*FIM*\n");

	return 0;
}





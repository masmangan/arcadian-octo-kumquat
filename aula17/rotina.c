#include <stdio.h>
#include <string.h>
#include "rotina.h"

float dobrar(float x)	// definição, implementação
{
	return 2.0f * x;
}

void geralinha(char s[])
{
	int larg = strlen(s) + 11;
	int i;
	printf("          =");
	for (i = 0 ; i < larg ; i++)
		printf("=");
	printf("=\n");
}

void cabecalho(char s[])
{

	//geralinha(s);
	printf("            %s, (c) 2015  \n", s);
	geralinha(s);
	printf("\n");

}

void rodape(char s[])
{
	printf("[*%s*]\n", s);
}

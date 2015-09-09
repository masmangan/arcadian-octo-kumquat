#include <stdio.h>
#include <string.h>

int main()
{
	char nome[30];
	char vocativo[60];

	printf("Qual é o seu nome?\n");
	scanf("%s", nome); // sem & ...

	printf("Olá, %s!\n", nome);
	printf("Seu nome tem %zu letras.\n", strlen(nome) );

	//vocativo = "Sr.";
	//vocativo = vocativo + nome;
	strcpy(vocativo, "Sr.");
	strcat(vocativo, " ");
	strcat(vocativo, nome);

	printf("Prazer em conhecê-lo, %s.\n", vocativo );

	return 0;
}

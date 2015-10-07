#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int r;
    printf("Ler arquivo (c) 2015.\n");
 
    FILE *entrada = fopen("dados.txt", "r");

    char linha[100];
    int i = 0;
    while( fgets(linha, 100, entrada) != NULL ) {
        i++;
        //printf("%s\n", linha);
        r = sscanf(linha, "%i %i", &a, &b);
        if (r == 2) {
            printf("%i + %i = %i\n", a, b, a + b);
        } else {
            printf("Erro na linha: %i.\n", i);
        }
    }

    fclose(entrada);

    printf("*FIM*\n");
	return 0;
}

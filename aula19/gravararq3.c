#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int r;
    printf("Ler arquivo (c) 2015.\n");
 
    FILE *entrada = fopen("aparelho.txt", "r");

    char linha[100];

    while( fgets(linha, 100, entrada) != NULL ) {
        //printf("%s\n", linha);
        r = sscanf(linha, "%i", &n);
        if (r == 1) {
            printf("%02i:%02i\n", n / 60, n % 60);
        }
    }

    fclose(entrada);

    printf("*FIM*\n");
	return 0;
}

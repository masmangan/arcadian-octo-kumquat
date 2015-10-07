#include <stdio.h>

int main() {
    int n;
    int h, m;
    int r;
    printf("Ler arquivo (c) 2015.\n");
 
    FILE *entrada = fopen("aparelho.txt", "r");

    while( ! feof(entrada) ) {
        r = fscanf(entrada, "%i", &n);
        if (r == 1) {
            h = n / 60;
            m = n % 60;
            printf("r=%i h=%i m=%i\n", r, h, m);
        } else {
            char dummy[100];
            fscanf(entrada, "%s", dummy);
        }
    }

    fclose(entrada);

    printf("*FIM*\n");
	return 0;
}

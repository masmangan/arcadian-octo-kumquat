/*
https://en.wikipedia.org/wiki/Hangman_%28game%29
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char secret[100];
    char word[100];
    unsigned len;
    
    printf("Jogo da Forca, (c) 2015\n");

    printf("Informe a palavra secreta: ");
    scanf("%s", secret);
    
    // FIXME: deve ficar no início da tela
    //int i;
    //for ( i = 0 ; i < 20 ; i++ )
    //    printf("\n");
    

    printf("A palavra informada foi: [%s]\n", secret);

    len = strlen(secret);
 
    printf("A palavra tem %d caracteres.\n", len);

    int j;
    for ( j = 0 ; j < len ; j++ )
        word[ j ] = '-';
    word[ len ] = '\0';

    printf("A palavra apresentada é: [%s]\n", word);

    // TODO: completar o jogo

    printf("*FIM*\n");

    return EXIT_SUCCESS;
}












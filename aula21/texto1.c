/*
LP1- Textos
*/
#include <stdio.h>
#include <string.h>

int main() {
    char c = 'A';
    char s1[100] = "A"; // A, 0000 0000
    char s2[100] = { 'A', '\0', 'B' }; // A, 0000 0000, B
    char s3[100] = { 'A', 'b', 'e', 'l', 'h', 'a', '\0' }; 
    char s4[100] = "Abelha"; 

    printf("%c\n", c);
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("%s\n", s4);

    printf( "%zu\n", strlen(s1) );
    printf( "%zu\n", strlen(s2) );
    printf( "%zu\n", strlen(s3) );
    printf( "%zu\n", strlen(s4) );

    return 0;
}

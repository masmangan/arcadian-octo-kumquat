// PUCRS/FACIN
// marco.mangan@pucrs.br

#include <stdio.h>
#include <math.h>

int main()
{
    int i;

    i = 1;

    printf("Início\n");

    while ( i <= 10 )
    {
        int q = (int) pow( (double)i, 2.0 );
        int c = (int) pow( (double)i, 3.0 );

        printf( "%4i", i );
        printf( " %4i", q );
        printf( " %4i", c );
        printf( "\n" );
        i = i + 1;
    }

    printf("Fim\n");

    return 0;
}

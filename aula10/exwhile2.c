// PUCRS/FACIN
// marco.mangan@pucrs.br

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int v;

    a = 0;

    printf("Início\n");

    while ( 1 )
    {
        scanf("%i", &v);
        if (v == 99)
            break;
        a = a + v;
    }

    printf("%i\n", a);

    printf("Fim\n");

    return 0;
}

#include <stdio.h>
#include <assert.h>

int main(void)
{
    char c;

    c = 0;

    while (1)
    {
        char n = c + 1;
        printf("c=%d , n=%d\n" , c , n) ;
        assert(n > c ) ;
        c = n ;
    }


    return 0;
}

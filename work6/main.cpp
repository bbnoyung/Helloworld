#include <stdio.h>

int main()
{
    unsigned long int N;
    printf( "Please, enter N: " );
    scanf( "%lu", &N );
    int k = 0;
    do
    {
        N /= 10;
        k = k + 1;
    }
    while( N /= 10 > 0 );
    printf( "Number of digits is: %d",k );
    return 0;
}

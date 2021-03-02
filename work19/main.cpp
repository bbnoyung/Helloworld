//Given the number N. Find the minimum number of decimal-binary numbers, so that their sum is equal to N
//int find( int N );
//32 = 11 + 11 + 10

#include <stdio.h>

int find( int N );

int main()
{
    int N = 32;
    int res = find(N);

    printf("Minimum number: %d ", res);
}

int find( int N )
{
    int min_number = 0;

    for ( int i = 0; N > 0; N/= 10 )
    {
        i = N % 10;
        if ( i > min_number ) min_number = i;
     }
    return min_number;
}

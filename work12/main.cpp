//Determine the location of the elements of array A (30) that do not occur in array B (15).
#include <stdio.h>

int main()
{
    constexpr int SIZE = 30;
    int A [SIZE];
    constexpr int  SIZE1 = 15;
    int B [SIZE1];

    printf ( "Enter numbers for array A(30): " );
    for( int i = 0; i < SIZE; ++i )

    {
        scanf( "%d", &A[i] );
    }

    printf ( "Enter numbers for array B(15): " );
    for( int j = 0; j < SIZE1; ++j )

    {
        scanf( "%d", &B[j] );
    }

    for ( int i = 0; i < SIZE; i++ )

    {
        int num = 0;

    for ( int j = 0; j < SIZE1; j++ )

        if ( A[i] == B[j] )
            num++;

        if (!num)
            printf ( "A[%d] is not found in B\n", i );

    }

    return 0;
}

//Determine the location of the elements of array A (30) that do not occur in array B (15).
#include <stdio.h>

#include "compare.h"

int main()
{
    constexpr int SIZE = 30;
    int A [SIZE] = {1, 2, 3, 4, 5, 6, 5, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
                   27, 28, 29, 30};
    constexpr int SIZE1 = 15;
    int B [SIZE1] = {1, 2, 3, 4, 5, 6, 5, 7, 9, 10, 11, 12, 13, 14, 15};
    int final[SIZE1];

    printf( "Array A: ");
    for( int i = 0; i < SIZE; ++i )
    {
        printf( "%d ", A[i]);
    }
    printf( "\n");


    printf( "Array B: ");
    for( int i = 0; i < SIZE1; ++i )
    {
        printf( "%d ", B[i]);
    }
    printf( "\n\n");

    for (int i = 0; i < compare(A,SIZE,B,SIZE1,final) ; i++)
        printf( "A[%d] is not found in B\n", final[i]);

    return 0;
}

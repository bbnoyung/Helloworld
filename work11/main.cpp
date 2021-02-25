//Swap the maximum and last negative elements of the array M (40).
#include <stdio.h>
#include <stdlib.h>

#include "swap.h"

int main()
{
    constexpr int SIZE = 40;
    int arr[SIZE];

    printf ( "Enter numbers for array M(40): " );

    for ( int i = 0; i < SIZE; i++ )
    {
        arr[i] = rand()%100-70;
        printf("%d ",arr[i]);
    }

    int neg = negativ( arr, SIZE );
    int max = maximum( arr, SIZE );
    printf("\n\n");
    printf("array[min]=%d array[max]=%d\n",arr[neg],arr[max]);

    printf ("\nResult: ");
    replace( arr, SIZE );

    for ( int i = 0; i < SIZE; i++ )
        printf ( "%d ", arr[i] );

    return 0;
}

//Swap the maximum and last negative elements of the array M (40).
#include <stdio.h>

int main()
{
    constexpr int SIZE = 40;
    int arr[SIZE];
    int max = 0;
    int min = 0;
    int tmp;

    printf ( "Enter numbers for array M(40): " );

    for ( int i = 0; i < SIZE; i++ )
    scanf( "%d", &arr[i] );

    for ( int i = 0; i < SIZE; i++ )
    {
        if ( arr[i] < arr [min] ) min = i;
        if ( arr[i] > arr [max] ) max = i;
    }

    printf("array[min]=%d array[max]=%d\n",arr[min],arr[max]);
    tmp = arr[min];
    arr[min] = arr[max];
    arr[max] = tmp;

    for ( int i = 0; i < SIZE; i++ )
        printf ( "%d ", arr[i] );

    return 0;
}

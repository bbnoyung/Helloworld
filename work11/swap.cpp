
int maximum(int *arr, int SIZE)
{
    int max = 0;
    for ( int i = 0; i < SIZE; i++ )
    {
        if ( arr[i] > arr[max] ) max = i;
    }
    return max;
 }

int negativ(int *arr, int SIZE)
{
    int min = 0;
    for ( int i = 0; i < SIZE; i++ )
    {
        if ( arr[i] < arr[min] ) min = i;
    }
    return min;
 }

void replace(int *arr, int SIZE)
{
    int tmp;
    tmp = arr[maximum(arr, SIZE)];
    arr[maximum(arr, SIZE)] = arr[negativ(arr, SIZE)];
    arr[negativ(arr, SIZE)] = tmp;
}






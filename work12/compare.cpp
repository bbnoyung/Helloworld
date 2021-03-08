
int compare(int *A, int SIZE, int *B, int SIZE1, int *final)
{
    int num = 0;
    int k = 0;

    for ( int i = 0; i < SIZE; ++i )
    {
        for ( int j = 0; j < SIZE1; ++j )
            if(A[i] == B[j])
               ++num;

        if( !num ){
           final[k] = i;
           //++k;
        }

        else num = 0;
    }
    return k;
}


int Digits( int N )
{
    int k = 0;
    do
    {
        N /= 10;
        k = k + 1;
    }

    while( N != 0 );
    return k;
}

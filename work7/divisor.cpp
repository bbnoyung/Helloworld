
int Divisor( int N1, int N2, int N3 )
{
    int del = 1;

    for(int i = 1; i < 9 ; i++)
      {
          if((N1 % i == 0) && (N2 % i == 0) && (N3 % i == 0))
          {
              del = i;
          }
      }

    return del;
}

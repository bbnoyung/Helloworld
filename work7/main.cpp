#include <stdio.h>

int main()
{
    int N1, N2, N3;
    int del = 1;
    printf( "Please enter three numbers: " );
    scanf( "%d%d%d", &N1, &N2, &N3 );
    for(int i = 1; i <= N1; i++)
      {
          if(N1 % i == 0 && N2 % i == 0 && N2 % i == 0)
          {
              del = i;
          }

      }

    printf( "Least common divisor is: %d",del );
    return 0;
}

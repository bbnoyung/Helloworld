#include <stdio.h>

int main()
{
    int N1;
    int N2;
    int N3;
    int del = 1;

    printf( "Please enter three numbers: " );
    scanf( "%d%d%d", &N1, &N2, &N3 );  

    if ( N1 == 0 || N2 == 0 || N3 == 0 )
      {
        printf ( "Common divisor is not found" );
        return 0;
      }
    for(int i = 1; i < 9 ; i++)
      {
          if((N1 % i == 0) && (N2 % i == 0) && (N3 % i == 0))
          {
              del = i;
          }
      }

    printf( "Least common divisor is: %d",del );
    return 0;
}

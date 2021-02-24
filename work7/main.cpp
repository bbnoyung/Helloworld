#include <stdio.h>

#include "divisor.h"

int main()
{
    int N1;
    int N2;
    int N3;

    printf( "Please enter three numbers: " );
    scanf( "%d%d%d", &N1, &N2, &N3 );

    if ( N1 == 0 || N2 == 0 || N3 == 0 )
      {
        printf ( "Common divisor is not found" );
        return 0;
      }

    int div = Divisor( N1, N2, N3 );
    printf( "Least common divisor is: %d",div );
    return 0;
}

//A 7x7 matrix is given. Swap the k-th column with the k-th row.
//Determine whether a given square matrix is symmetric with respect to its main diagonal.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    constexpr int X = 7;
    constexpr int Y = 7;
    bool isSymmetrically = true;
    int A[X][Y];
    int k = 0;

    for (int i = 0; i < 7; i++)
        {
            for ( int j = 0; j < 7; j++ )
               {
                   A[i][j] = rand() % 100;
               }
        }
    printf ( "Matrix: \n" );

    for ( int i = 0; i < 7; i++ )
    {
        for ( int j = 0; j < 7; j++ )
        {
            printf ( " %2d ", A[i][j] );
        }
    printf ("\n");
    }

    printf ( "\nEnter number K less than 7 (including): " );
    scanf ( "%d", &k );

    k -= 1;

    for (int i = 0; i < 7 && k < 7; i++)
        {
            int tmp = A[i][k] ;
            A[i][k] = A[k][i];
            A[k][i] = tmp;
        }

    printf ( "\nResult: \n" );

    for ( int i = 0; i < 7; i++ )
    {
      for ( int j = 0; j < 7; j++ )
      {
          printf ( " %2d ", A[i][j] );
      }
    printf ("\n");
    }

    for (int i=0; i < 7; ++i)
    {
       for (int j=0; j < 7; ++j)
       {
           if(A[i][j] != A[j][i])
           isSymmetrically = false;
       }
    }
   printf ( "\n" );
   isSymmetrically ? printf("The matrix is symmetric") : printf("The matrix is not symmetric");
   printf("\n");

   return 0;

}

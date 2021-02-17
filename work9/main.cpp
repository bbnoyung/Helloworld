#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int N = 0;
    int i;
    printf ("Enter number: ");
    scanf("%d", &num);
    for(i=0; num > 0; ++i)
    {
        N+=(num%2)*pow(10.0,i);
        num/=2;
    }
    printf ( "Result: %d", N );

    return 0;
}

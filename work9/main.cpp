#include <stdio.h>
#include <math.h>

#include "decimal.h"

int main()
{
    int num;

    printf ("Enter number: ");
    scanf("%d", &num);

    int res = Decimal ( num );
    printf ( "Result: %d", res );

    return 0;
}

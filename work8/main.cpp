#include <stdio.h>

#include "number.h"

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number <= 9)
    {
        printf ("Action is not possible");
        return 0;
    }

    int res = new_number( number );
    printf("Changed number: %d\n", res);

    return 0;
}

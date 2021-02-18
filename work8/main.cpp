#include <stdio.h>

int main()
{
    int number;
    int middle;
    int last_number;
    printf("Enter number: ");
    scanf("%d", &number);

    last_number = number%10;
    int first_number = number/10;
    int tens = 10;
    middle = 0;
    while (first_number > 9)
    {
        middle += (first_number%10) * tens;
        tens *= 10;
        first_number /= 10;
    }
    int new_number = last_number * tens + middle + first_number;
    printf("Changed number: %d\n", new_number);

    return 0;
}

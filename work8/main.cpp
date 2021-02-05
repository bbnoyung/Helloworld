#include<stdio.h>

int main()
{
    int num, num1;
    int num2, num3;
    printf("Enter number: ");
    scanf("%d", &num);
    num3 = num % 10;
    num /= 10;
    num2 = 10;
    num1 = 0;
    while (num > 9)
    {
        num1 += (num % 10) * num2;
        num2 *= 10;
        num /= 10;
    }
    num1 = num2 * num3 + num1 + num;
    printf("Changed number: %d\n", num1);
    return 0;
}

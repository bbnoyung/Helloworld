//A string of characters is given. Determine whether it is a valid parenthesized expression.
#include <stdio.h>
#include <string.h>

int main()
{
  constexpr int SIZE = 1024;
  char str[SIZE];
  printf("Enter an expression: ");
  fgets(str, 1024, stdin);

  int bracket = 0;

  for (int i = 0; i < SIZE; ++i)
  {
    if (str[i] == '(')
    {
        ++bracket;
    }
    if (str[i] == ')')
    {
        --bracket;
    }

  }
    if (bracket == 0)
    {
        printf("This is the correct expression");
    }
    else
    {
        printf("This is not the correct expression");
    }

  return 0;
 }

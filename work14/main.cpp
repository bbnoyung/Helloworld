//A string of characters is given. Remove all odd-length words from it.
//Words are separated from each other by a single space.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[255];
    int i;
    int id = 0;
    int count = 0;

    printf( "Enter words for check parity: " );
    fgets(str, 255, stdin);
    printf( "Result: " );
    int SIZE = strlen(str);

    for (i = 0; i < SIZE; i++)
    {
        if ((str[i] != ' ') && (str[i] != '\n')) count += 1;
        else
        {
            if (count%2 == 0)
            {
                id = i - count;
                count += id;
                for (i = id; i < count; i++)
                    printf("%c", str[i]);
                printf(" ");
            }
             count = 0;
        }
    }

}

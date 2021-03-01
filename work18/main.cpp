//There are several children, each child has a certain number of candies. The number of candies is an array.
//There is an additional number of candies.
//Determine if the specified child is given all the additional candy, then whether he will have a max number
//bool find (int* mass, int size, int child, int count
//false, true, true, true, false

#include <stdio.h>
#include <stdbool.h>

bool find (int* mass, int size, int child, int count);

int main()
{
    constexpr int size = 5;
    int mass[size] = {1, 2, 5, 2, 1};
    int count = 3;
    int child = 0;

    while (child < size)
    {
        (find(mass, size, child, count) != 0) ? printf("true ") : printf ("false ");
        ++child;
    }
    return 0;
}

bool find(int* mass, int size, int child, int count )
{
   int candy_max = 0;
   int candy = 0;

   for (int i = 0; i < size; ++i)
       if (mass[i] > candy_max) candy_max = mass[i];

   candy = mass[child] + count;
   return (candy >= candy_max) ? true : false;
}





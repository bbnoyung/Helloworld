//given an array of numbers, each number occurs in the array twice, except for one. find this number
//int find (int* mass, int size)

#include <stdio.h>

int find (int* mass, int size);

int main()
{
    constexpr int size = 9;
    int mass[size] = {1, 1, 3, 3, 4, 9, 5, 4, 5};


        int f = find (mass, size);
        printf ( "Result: %d", f );

}

int find (int* mass, int size)
{
    unsigned int f;

    for ( int i = 0; i < size; i++ )
    {
        f = 1;
        for (int j = 0; j < size; j++)
        {
            if((mass[i] == mass[j]) && (i != j))
            {
                f = 0;
                break;
            }
        }
    if (f == 1) return mass[i];
    }
}



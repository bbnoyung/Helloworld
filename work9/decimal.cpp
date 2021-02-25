#include <math.h>

int Decimal (int num)
{
    int N = 0;
    int i;
    for(i=0; num > 0; ++i)
    {
        N += (num%2) * pow(10.0,i);
        num/=2;
    }

    return N;
}

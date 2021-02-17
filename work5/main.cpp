#include <stdio.h>
#include <math.h>

int main()
{
    int R;
    int a;
    int d;

    printf( "Enter R, a and d: " );
    scanf( "%d%d%d",&R,&a,&d );
    double s_circle = M_PI * R * R;
    double s_triangle =(a * a * sqrt(3.))/4;
    double s_square = d * d;
    printf( "Result: %.5lf",
           ( s_circle > s_triangle && s_circle > s_square)
           ? s_circle
           :(s_circle < s_triangle && s_triangle > s_square)
             ? s_triangle
             : s_square);

    return 0;
}

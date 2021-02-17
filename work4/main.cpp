#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;
    printf( "Enter x: " );
    scanf( "%lf",&x );
    y = ((2 * cos(x - M_PI/6) + sqrt(2))/((1/(2 * log(x))) + pow(sin(x * x),2))) * exp(3 * x);
    printf("y = 2*cos(x-pi/6)+sqrt(2)/1/2*lnx+sin^2(x)^2*e^3x = %.10lf\n", y);

    return 0;
}

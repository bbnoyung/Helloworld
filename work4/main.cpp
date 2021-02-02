#include<stdio.h>
#include <math.h>
int main()
{
    double x,y,b,pi = 3.1415926;
    printf("Enter x\n");
    scanf("%lf",&x);
    b=x*(180/pi);
    y=((2*cos(b-30)+sqrt(2))/((1/2*log(x))+pow(sin(b*b),2)))*exp(3*x);
    printf("y=2*cos(x-pi/6)+sqrt(2)/1/2*x+sin(x)*sin(x)*e^3x=%.10lf\n",y);
    getchar();
    return 0;
}

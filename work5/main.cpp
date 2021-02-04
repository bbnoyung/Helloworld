#include<stdio.h>
#include <math.h>
int main()
{
    int R,a,d;
    double s1,s2,s3;
    printf( "Enter R, a and d\n" );
    scanf( "%d%d%d",&R,&a,&d );
    s1=M_PI * R * R;
    s2=(a * a * sqrt(3))/4;
    s3= d * d;
    printf("Result: %.6lf",
           (s1 > s2 && s1 > s3)
           ? s1
           :(s1 < s2 && s2 > s3)
             ? s2
             :s3);
    getchar();
    return 0;
}

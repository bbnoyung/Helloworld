#include<stdio.h>
int main()
{
    int a = 5, c = 5;
    double a1, c1;
    double d1, b1;
    int b, d;
    printf("a = 5, c = 5. Please enter b and d ");
    scanf("%d %d", &b, &d);
    printf("b = %d, d = %d\n",b, d);
    a=a+b-2;
    printf(" a = a + b - 2 = %d\n",a);
    c=c+1;
    printf(" c = c + 1 = %d\n",c);
    d=c-a+d;
    printf(" d = c - a + d = %d\n",d);
    a=a*c;
    printf(" a = a * c = %d\n",a);
    c=c-1;
    printf(" c = c - 1 = %d\n",c);
    a1=(double)a/10;
    printf(" a = a/10 = %.4lf\n",a1);
    c1=(double)c/2;
    printf(" c = c/2 = %.4lf\n",c1);
    b1=b-1;
    printf(" b = b - 1 = %.4lf\n",b1);
    d1=(double)d*(c1+b1+a1);
    printf(" d = d * (c + b + a) = %.4lf\n",d1);
    getchar();
    return 0;
}

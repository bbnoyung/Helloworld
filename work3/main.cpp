#include<stdio.h>
int main()
{
    int a=5,c=5,b,d;
    printf("a=5, c=5. Please enter b and d\n");
    scanf("%d %d", &b, &d);
    printf("b=%d\n",b);
    printf("d=%d\n",d);
    a=a+b-2;
    printf(" a = a+b-2=%d\n",a);
    c=c+1;
    printf(" c = c+1=%d\n",c);
    d=c-a+d;
    printf(" d = c-a+d=%d\n",d);
    a=a*c;
    printf(" a = a*c=%d\n",a);
    c=c-1;
    printf(" c = c-1=%d\n",c);
    a=a/10;
    printf(" a = a/10=%d\n",a);
    c=c/2;
    printf(" c = c/2=%d\n",c);
    b=b-1;
    printf(" b = b-1=%d\n",b);
    d=d*(c+b+a);
    printf(" d = d*(c+b+a)=%d\n",d);
    getchar();
    return 0;
}

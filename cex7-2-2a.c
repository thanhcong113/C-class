#include <stdio.h>
void main(void)
{
	
	int a,b;// int value
	double x,y;// double value
	// int number
	printf("a(int)");
	scanf("%d",&a);
	printf("b(int)");
	scanf("%d",&b);
	printf("%d+%d=%d\n",a,b,a+b);
	// double number
	printf("x(double)");
	scanf("%lf",&x);
	printf("y(double)");
	scanf("%lf",&y);
	printf("%lf + %lf= %lf\n",x,y,x+y);
}
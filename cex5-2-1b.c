#include <stdio.h>
void main()
{
	int a=24;
	int b=12;
	double x=5.4;
	double y=4.6;
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%f*%f=%f\n",x,y,x*y);
	printf("%f/%f=%f\n",x,y,x/y);
	a=128;
	b=16;
	x=128.0;
	y=16.0;
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%f*%f=%f\n",x,y,x*y);
	printf("%f/%f=%f\n",x,y,x/y);
}
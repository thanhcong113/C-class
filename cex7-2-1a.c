#include <stdio.h>
void main(void)
{
	int a=10;
	double b=11.1;
	char c='A';
	printf("a=%d b=%lf c=%c\n",a,b,c);
	printf("c=(char)");
	scanf("%c",&c);
	printf("a=(int)");
	scanf("%d",&a);
	printf("b=(double)");
	scanf("%lf",&b);
	printf("a=%d b=%lf c=%c\n",a,b,c);
}
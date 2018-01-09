#include <stdio.h>
void main(void)
{
	double a,b;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	
	printf("a%%b=%lf\n",(a/b)*100);
}
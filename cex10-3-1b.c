#include<stdio.h>
void main(void)
{
	int a,b;
	int x,y,z;
	printf("a=\n");
	scanf("%d",&a);
	printf("b=\n");
	scanf("%d",&b);
	x=a | b;
	y=a & b;
	z=(x & b)+(y | a);
	printf("x=%d y=%d z=%d\n",x,y,z);
}
	
	
	
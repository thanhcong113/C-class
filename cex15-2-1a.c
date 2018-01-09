#include<stdio.h>
void main(void)
{
	int n;
	int m1=100,m2=100;
	printf("n=");
	scanf("%d",&n);
	m1=n>=0&&n<50;
	m2=n<0||n>=50;
	printf("m1=%d\tm2=%d\n",m1,m2);
}
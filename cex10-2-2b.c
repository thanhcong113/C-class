#include<stdio.h>
void main(void)
{
	char a=10;
	char b=5;
	char c=15;
	char d=0;
	char n1,n2,n3,n4;
	n1=(a|b)&(c|d);
	a=1;
	b=2;
	c=4;
	d=8;
	n2=a|b|c|d;
	n3=a+b+c+d;
	n4=a&b&c&d;
	
	
	
	
	printf("n1=%d n2=%d n3=%d n4=%d\n",n1,n2,n3,n4);
}
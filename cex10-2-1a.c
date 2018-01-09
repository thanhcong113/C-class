#include<stdio.h>
void main(void)
{
	int a=1;
	int b=3;
	int n1,n2,n3,n4;
	n1=a&b;
	n2=a|b;
	n3=a^b;
	n4=~a;
	printf("n1=%x n2=%x n3=%x n4=%x\n",n1,n2,n3,n4);
}
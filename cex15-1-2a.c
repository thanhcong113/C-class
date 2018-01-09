#include<stdio.h>
void main(void)
{
	int n=10;
	int m=0;
	if(n>60||n<0)
	{
		m=-1;
	}
	else if (n>40||n<20){
		m=0;
	}
	else
	{
		m=1;
	}
printf("m=%d\tn=%d\n",m,n);
}
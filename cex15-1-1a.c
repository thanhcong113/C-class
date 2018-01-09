#include<stdio.h>
void main(void)
{
	int n=51;
	int m=0;
	if(n>50&&m==0)
	{
		m=1;
	}
	else if (n>50&&m!=0){
		m=2;
	}
	else
	{
		m=3;
	}
printf("m=%d\n",m);
}
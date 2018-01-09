#include<stdio.h>
void main(void)
{
	int i,sum=0;
	for(i=0;i<=998;i+=2)
	{
		sum+=i;
	}
	printf("Sum=%d\n",sum);
}

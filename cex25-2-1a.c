#include<stdio.h>
void main(void)
{
	int i,sum=0;
	for(i=100;i<=999;i++)
	{
		sum+=i;
	}
	printf("100+1001+....+999=%d\n",sum);
}

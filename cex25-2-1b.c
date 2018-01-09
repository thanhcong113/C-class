#include<stdio.h>
void main(void)
{
	int i,sum=0;
	for(i=101;i<=999;i+=2)
	{
		sum+=i;
	}
	printf("101+103+105+....+999=%d\n",sum);
}

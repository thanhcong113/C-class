#include<stdio.h>
void main(void)
{
	int n;
	printf("disk=");
	scanf("%d",&n);
	if (n<=10)
	
	{
		printf("money=%d\\ \n",20*n);
	}
	else
	{
		printf("money=%d\\ \n",200+(n-10)*15);
	}
}
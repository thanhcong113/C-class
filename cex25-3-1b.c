#include<stdio.h>
void main(void)
{
	int i,sum=0,n;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("Sum=%d\n",sum);
}

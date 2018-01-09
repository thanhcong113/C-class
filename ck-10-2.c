#include<stdio.h>
void main(void)
{
	int i,n;
	int sum=0;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("1+2+.....+%d=%d\n",n,sum);
}
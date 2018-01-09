#include<stdio.h>
void main(void)
{
	int i,d=2,n;
	int sum=0;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=sum+(i*d);
	}
	printf("sum=%d\n",sum);
}
#include<stdio.h>
void main(void)
{
	int sum=0,n;
	printf("n=");scanf("%d",&n);
	
	while(n>=0){
		sum=sum+n;
		printf("n=");scanf("%d",&n);
	}
	printf("sum=%d\n",sum);
}

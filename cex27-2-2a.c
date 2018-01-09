#include<stdio.h>
void main(void)
{
	int sum=0,n,i=0;
	printf("n=");scanf("%d",&n);
	
	while(i<n){
		sum=sum+i;
	i=i+3;
	}
	printf("sum=%d\n",sum);
}

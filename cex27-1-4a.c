#include<stdio.h>
void main(void)
{
	int sum=100,i=0,n=100;
//	printf("n=");scanf("%d",&n);
	while(i<=n){
		sum+=i++;
}
	
	printf("sum 1 to %d=%d\n",n,sum);
}
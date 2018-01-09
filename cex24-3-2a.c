#include<stdio.h>
void main(void)
{
	int i,n;
	int sum=0;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2!=0) 
		sum+=i;
	
	}
	printf("sum=%d\n",sum);
}
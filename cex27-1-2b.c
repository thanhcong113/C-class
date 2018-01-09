#include<stdio.h>
void main(void)
{
	int sum=0,n=100,i;
	i=n;
	while(i>=0){
		sum+=i--;
	//	printf("%d,%d\n",i--,sum);
	}
	printf("%d+....+1=%d\n",n,sum);
}
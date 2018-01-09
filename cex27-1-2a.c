#include<stdio.h>
void main(void)
{
	int sum=0,i=1,n;
	printf("n=");scanf("%d",&n);
	while(i<n){
		sum+=i++;
		//printf("%d,%d\n",i--,sum);
	}
	printf("1+2+....+%d=%d\n",n,sum);
}
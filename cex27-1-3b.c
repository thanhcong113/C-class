#include<stdio.h>
void main(void)
{
	int sum=0,n=100,i=0;
	while(i!=n){
		if (i%2==0)
		sum+=i;
		i++;
	}
	printf("sum 1 to %d=%d\n",n,sum);
}
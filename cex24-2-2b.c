#include<stdio.h>
void main(void)
{
	int i,n=10;
	int sum=n,s=100;
	
	for(i=n-1;i>0;i--){
		s=s-2;
		sum=sum+s;
	printf("s[%d]=%d i=%d\n",i,s,i);
	}
	printf("sum=%d\n",sum);
}
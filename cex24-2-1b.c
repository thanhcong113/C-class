#include<stdio.h>
void main(void)
{
	int i,n=10;
	int sum=0,s;
	
	for(i=0;i<=n;i++){
		s=i*2;
		sum=sum+s;
			printf("s[%d]=%d\n",i,s);
	}
	printf("sum=%d\n",sum);
}
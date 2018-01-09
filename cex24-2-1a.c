#include<stdio.h>
void main(void)
{
	int i,d=2;
	int sum=0;
	
	for(i=0;i<100;i++){
		sum=sum+(i*d);
	}
	printf("sum=%d\n",sum);
}
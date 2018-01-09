#include<stdio.h>
void main(void)
{
	int i,n=1000;
	int count=0;

	for(i=1;i<=n;i++){
		if(i%3==0) 
			count++;
	
	}
	printf("count=%d\n",count);
}
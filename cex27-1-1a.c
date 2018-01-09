#include<stdio.h>
void main(void)
{
	int sum=0,i=10;
	while(i>0){
		sum+=i;
		printf("%d,%d\n",i--,sum);
	}
	printf("10+9+....+1=%d\n",sum);
}
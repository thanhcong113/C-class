#include<stdio.h>
void main(void)
{
	int i;
	int count=0;
	
	for(i=1;i<=10;i++){
		count++;
		printf("%d\n",i);
	}
	printf("\ni=%d\n",i);
	printf("count=%d\n",count);
}
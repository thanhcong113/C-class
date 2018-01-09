#include<stdio.h>
void main(void)
{
	int n[]={1,2,4,7,11,16,22,29,37,46};
	int i;
	for(i=9;i>=0;i-=1)
	{
		printf("%d\t",n[i]);
	}
	printf("\n");
	
}
#include<stdio.h>
void main(void)
{
	int n[]={1,3,5,7,9,22,23};
	int i;
	for(i=6;i>=0;i-=2)
	{
		printf("%d\t",n[i]);
	}
	printf("\n");
}
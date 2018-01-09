#include<stdio.h>
void main(void)
{
	int n[]={5,12,8,21,9,6,13,9,22,10};
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\t",n[++i]);
	}
	printf("\n");
	for(i=9;i>=0;i--){
		printf("%d\t",n[i]);
	}
	printf("\n");
}
#include<stdio.h>
void main(void)
{
	char n[]={'a','b','c','d','e','A','B','C','D','E'};
	int i;
	for(i=0;i<10;i++)
	{
		printf("%c\t",n[i++]);
	}
	printf("\n");
	for(i=9;i>=0;i--){
		printf("%c\t",n[i]);
	}
	printf("\n");
}
	

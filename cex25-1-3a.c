#include<stdio.h>
void main(void)
{
	char a='@';
	int i;
	for(i=0;i<16;i++)
	{
		printf("%c",a++);
	}
	printf("\n");
	for(i=0;i<16;i++){
		printf("%c",a++);
	}
	printf("\n");
}
	

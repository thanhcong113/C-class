#include <stdio.h>
void main(void)
{
	int n;
	printf("‚¹‚¢‚·‚¤");
	scanf("%d",&n);
	switch(n){
		default:{
		printf("E");
		break;
		}
		case 1:
		case 2:
		case 3:	{
		printf("A");
		break;
	}
		case 4:		{
		printf("B");
		break;
		}
		case 5:
		case 6:
		case 7:
		{
		printf("C");
		break;
		}
	}
	printf("\n");
}

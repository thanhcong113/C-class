#include <stdio.h>
void main(void)
{
	int no;
	printf("input number");
	scanf("%d",&no);
	if (no%2){
		printf("%d is even number\n",no);
	}
	else {
		printf("%d is odd number\n");
	}
}
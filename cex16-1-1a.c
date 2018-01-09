#include <stdio.h>
void main(void)
{
	int no;
	printf("input number");
	scanf("%d",&no);
	if (no%10){
		printf("%d is not multiple 10\n",no);
	}
}
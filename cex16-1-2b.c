#include <stdio.h>
void main(void)
{
	int no;
	printf("input number");
		scanf("%d",&no);
		
		if (no==0) printf("ゼロ\n");
		else if (no>=-9&&no<=9) printf("1けたです	\n");
		else printf("２けたです\n");
}
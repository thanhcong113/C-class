#include <stdio.h>
void main(void)
{
	int no;
	printf("input number");
		scanf("%d",&no);
		
		if (no==0) printf("�[��\n");
		else if (no>=-9&&no<=9) printf("1�����ł�	\n");
		else printf("�Q�����ł�\n");
}
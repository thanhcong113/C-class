#include <stdio.h>
void main(void)
{
	int year;
	printf("���Ȃ��̂Ƃ���");
	scanf("%d",&year);
	if (year>=18) printf("���Ƃ�\n");
	else if ( year>5) printf("���ǂ�\n");
	else if (year>1) printf("�悤��\n");
	else printf("�ɂイ��\n");
}
#include<stdio.h>
void main(void)
{
	int no;
	printf("���������̂ɂイ��傭:");
	scanf("%d",&no);
	
		switch(no%3){
			case 0:printf("�R��肫��܂�\n");
			break;
			case 1:printf("���܂�͂P�ł�\n");
			break;
			case 2:
			printf("���܂�͂Q�ł�\n");
			break;
		}
	
		
	}

#include<stdio.h>
void main(void)
{
	int no;
	printf("���������̂ɂイ��傭:");
	scanf("%d",&no);
	if (no>0)
	{
		switch(no%2){
			case 0:printf("���������ł�\n");
			break;
			case 1:printf("�������ł�\n");
			break;
		}
	
		
	}
}
#include<stdio.h>
void main(void)
{
	int no;
	printf("No:");
	scanf("%d",&no);
	
		switch(no%5){
			case 0:printf("だいいち\n");
			break;
			case 1:printf("きち\n");
			break;
		case 3:
		case 2:
		printf("しょうきち\n");
			break;
			case 4:printf("きょう\n");
			break;
	
		
	}
}
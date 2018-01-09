#include<stdio.h>
void main(void)
{
	int no;
	printf("No:");
	scanf("%d",&no);
	
		switch(no%5){
			case 0:printf("‚¾‚¢‚¢‚¿\n");
			break;
			case 1:printf("‚«‚¿\n");
			break;
		case 3:
		case 2:
		printf("‚µ‚å‚¤‚«‚¿\n");
			break;
			case 4:printf("‚«‚å‚¤\n");
			break;
	
		
	}
}
#include<stdio.h>
void main(void)
{
	int n;
	printf("month:");
	scanf("%d",&n);
	
		switch(n){
			case 3:
			case 4:
			case 5:
			
			printf("はる\n");
			break;
			case 8:
			case 6:
			case 7:
			printf("なつ\n");
			break;
		        case 11:
		        case 9:
		        case 10:
		        printf("あき\n");
			break;
			case 12:
			case 1:
			case 2:printf("ふゆ\n");
			break;
	
		
	}
}
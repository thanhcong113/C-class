#include<stdio.h>
void main(void)
{
	int no;
	printf("せいすうのにゅうりょく:");
	scanf("%d",&no);
	
		switch(no%3){
			case 0:printf("３わりきれます\n");
			break;
			case 1:printf("あまりは１です\n");
			break;
			case 2:
			printf("あまりは２です\n");
			break;
		}
	
		
	}

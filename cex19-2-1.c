#include<stdio.h>
void main(void)
{
	int no;
	printf("せいすうのにゅうりょく:");
	scanf("%d",&no);
	if (no>0)
	{
		switch(no%2){
			case 0:printf("ぐうすうです\n");
			break;
			case 1:printf("きすうです\n");
			break;
		}
	
		
	}
}
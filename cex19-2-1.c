#include<stdio.h>
void main(void)
{
	int no;
	printf("‚¹‚¢‚·‚¤‚Ì‚É‚ã‚¤‚è‚å‚­:");
	scanf("%d",&no);
	if (no>0)
	{
		switch(no%2){
			case 0:printf("‚®‚¤‚·‚¤‚Å‚·\n");
			break;
			case 1:printf("‚«‚·‚¤‚Å‚·\n");
			break;
		}
	
		
	}
}
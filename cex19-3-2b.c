#include<stdio.h>
void main(void)
{
	int no;
	printf("‚¹‚¢‚·‚¤‚Ì‚É‚ã‚¤‚è‚å‚­:");
	scanf("%d",&no);
	
		switch(no%3){
			case 0:printf("‚R‚í‚è‚«‚ê‚Ü‚·\n");
			break;
			case 1:printf("‚ ‚Ü‚è‚Í‚P‚Å‚·\n");
			break;
			case 2:
			printf("‚ ‚Ü‚è‚Í‚Q‚Å‚·\n");
			break;
		}
	
		
	}

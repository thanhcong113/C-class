#include <stdio.h>
void main(void)
{
	int year;
	printf("‚ ‚È‚½‚Ì‚Æ‚µ‚Í");
	scanf("%d",&year);
	if (year>=18) printf("‚¨‚Æ‚È\n");
	else if ( year>5) printf("‚±‚Ç‚à\n");
	else if (year>1) printf("‚æ‚¤‚¶\n");
	else printf("‚É‚ã‚¤‚¶\n");
}
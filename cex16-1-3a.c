#include <stdio.h>
void main(void)
{
	int year;
	printf("あなたのとしは");
	scanf("%d",&year);
	if (year>=18) printf("おとな\n");
	else if ( year>5) printf("こども\n");
	else if (year>1) printf("ようじ\n");
	else printf("にゅうじ\n");
}
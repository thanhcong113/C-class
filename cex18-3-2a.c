#include <stdio.h>
void main(void)
{
	char ch;
	scanf("%c",&ch);
	switch(ch){
		default:
		printf("input error\n");
		break;
		case 'y':
		case 'Y':
		printf("yes ‚Å‚·\n");
		break;
		case 'n':
		case 'N':
		printf("no‚Å‚·\n");
		break;
	}
}

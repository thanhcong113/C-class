#include <stdio.h>
void main(void)
{
	char ch;
	scanf("%c",&ch);
	switch(ch){
		default:
		printf("���̓G���[\n");
		break;
		case 'y':
		case 'Y':
		printf("ok\n");
		break;
		case 'n':
		case 'N':
		printf("no\n");
		break;
	}
}

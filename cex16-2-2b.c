#include <stdio.h>
void main(void)
{
	int n=6;
	
		if (n%3==0) printf("わりきれます\n");
		else if (n%3==1) printf("あまりは１です\n");
		else printf("あまりは２です\n");
}
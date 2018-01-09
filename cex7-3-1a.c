#include <stdio.h>
void main()
{
	char c;
	printf("c(char)");
	scanf("%c",&c);
	printf("%c+2=%c\n",c,c+2);
	printf("%c number is %d(decimal) %x(hex)\n",c,c,c);
	
}
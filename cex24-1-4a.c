#include<stdio.h>
void main(void)
{
	char c='@';
	int i;
	
	for(i=1;i<=64;i++){
	if(i%32==0) printf("%c\n",c++);
		else printf("%c",c++);
	}
	
}
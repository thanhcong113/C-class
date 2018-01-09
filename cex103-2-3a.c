#include<stdio.h>

void main(void){
	char s[]="Hello World";
	int i;
	printf("before= %s\n",s);
	s[6]='\0';
	printf("after = %s\n",s);
}
	


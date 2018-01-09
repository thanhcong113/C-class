#include<stdio.h>
#define size 50
void main(void){
	char s[]="Hello";
	
	printf("%s\n",s);
	s[3]='\0';
	printf("%s\n",s);
}

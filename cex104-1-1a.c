#include<stdio.h>
#define size 50
void main(void){
	char s[]="Hello";
	char buf[size]=" Old String";
	int i=0;
	printf("buf = %s\n",buf);
	for(i=0;s[i]!='\0';i++){
		buf[i]=s[i];
	}
	
	buf[i]='\0';
	printf("buf=%s\n",buf);
}
#include<stdio.h>
#define size 50
void main(void){
	char s[]="Hello";
	char buf[size];
	int i=0;
	for(i=0;s[i]!='\0';i++){
		buf[i]=s[i];
	}
	printf("%d\n",i);
	buf[i]='\0';
	printf("buf=%s\n",buf);
}
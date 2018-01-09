#include<stdio.h>
#define size 50
void main(void){
	char s[]="1aB2cD3eF4gH";
	char buf[size];
	int i=0,j=0;
	printf("s = %s\n",s);
	for(i=0;s[i]!='\0';i++){
		s[2]='b';
		s[5]='d';
		s[8]='f';
		s[11]='h';
		
	
		//buf[i]=s[i];
	}
	for(i=0;s[i]!='\0';i++){
		buf[i]=s[i];
	}
	
	buf[i]='\0';
	printf("buf = %s\n",buf);
}
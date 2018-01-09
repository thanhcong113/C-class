#include<stdio.h>

void main(void){
	char s[]="Hello";
	int i;
	printf("%s\n",s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='l') s[i]='x';
}
	printf("%s\n",s);
}

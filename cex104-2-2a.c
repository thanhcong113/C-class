#include<stdio.h>
#define size 50
void main(void){
	char s[]="123AbCdEfGhIjKlM456";
	char buf[size];
	int i=0,j=0;
	printf("before= %s\n",s);
	for(i=0;s[i]!='\0';i++){
		s[3]='a';
		s[5]='c';
		s[7]='e';
		s[9]='g';
		s[11]='i';
		s[13]='k';
		s[15]='m';
		//buf[i]=s[i];
	}
	for(i=0;s[i]!='\0';i++){
		buf[i]=s[i];
	}
	
	buf[i]='\0';
	printf("after = %s\n",buf);
}
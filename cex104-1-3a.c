#include<stdio.h>
#define size 50
void main(void){
	char s[]="aB1cD2eF3gH4";
	char buf[size];
	int i=0,j=0;
	printf("s = %s\n",s);
	while(s[i]!='\0'){
		if(s[i]>='a'&& s[i]<='z'){
	
		buf[j++]=s[i];
	}
	i++;
	}
	buf[j]='\0';
	printf("buf = %s\n",buf);
}
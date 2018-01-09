#include<stdio.h>
#define size 50
void main(void){
	char s[]="A1B2C3D4E5F6G7";
	char buf[size];
	int i=0,j=0;
	printf("s = %s\n",s);
	while(s[i]!='\0'){
		if(i%2!=0){
	
		buf[j++]=s[i];
	}
	i++;
	}
	buf[j]='\0';
	printf("buf = %s\n",buf);
}
#include<stdio.h>
#define size 50
void main(void){
	char s[]="ABCDEF123";
	char tmp;
	int len,i;
	printf("s = %s\n",s);
	for(len=0;s[len]!='\0';len++);
	for(i=0;i<len/2;i++){
		tmp=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=tmp;
	}
	
	
	printf("s = %s\n",s);
}
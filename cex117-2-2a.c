#include<stdio.h>
#include<string.h>
void main(){
	char s[50];
	char t[10];
	printf("名前（１０字以内） ");
	scanf("%s",s);
	//char *x = "ABC";
	
	
		strncpy(t,s,10);
		printf("t = %s こんいちわ\n",t);
}
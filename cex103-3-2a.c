#include<stdio.h>
void main(void){
	char s[100];
	int len;
	printf("input?");
	scanf("%s",s);
	for(len=0;s[len]!='\0';len++);{
	
	printf("%s ‚Ì’·‚³‚Í= %d\n",s,len);}
	
}
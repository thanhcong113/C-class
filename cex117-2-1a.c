#include<stdio.h>
#include<string.h>
#define BUF 100
void main(){
	char s[50];
	int len;
	printf("文字列入力?");
	
	while (gets(s)){
				 puts(s);
	       len = strlen(s);
				 printf("入力された文字の長さは%d です。\n",len);
		     printf("文字列入力?");
	}
}
#include<stdio.h>
#include<string.h>
#define BUF 100
void main(){
	char s[50];
	int len;
	printf("���������?");
	
	while (gets(s)){
				 puts(s);
	       len = strlen(s);
				 printf("���͂��ꂽ�����̒�����%d �ł��B\n",len);
		     printf("���������?");
	}
}
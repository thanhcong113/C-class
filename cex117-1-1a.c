#include<stdio.h>
#define BUF 100
void main(){
	char buf[BUF];
	printf("文字列入力?");
	while (gets(buf)){
		printf("入力された文字列:");
		puts(buf);
		printf("文字列入力?");
	}
}
#include<stdio.h>
#define BUF 100
void main(){
	char buf[BUF];
	printf("���������?");
	while (gets(buf)){
		printf("���͂��ꂽ������:");
		puts(buf);
		printf("���������?");
	}
}
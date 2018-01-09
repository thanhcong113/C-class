#include<stdio.h>
#define BUF 100
void main(){
	char buf[BUF];
	printf("•¶Žš—ñ“ü—Í?");
	while (gets(buf)){
		printf("“ü—Í‚³‚ê‚½•¶Žš—ñ:");
		puts(buf);
		printf("•¶Žš—ñ“ü—Í?");
	}
}
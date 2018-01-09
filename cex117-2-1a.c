#include<stdio.h>
#include<string.h>
#define BUF 100
void main(){
	char s[50];
	int len;
	printf("•¶š—ñ“ü—Í?");
	
	while (gets(s)){
				 puts(s);
	       len = strlen(s);
				 printf("“ü—Í‚³‚ê‚½•¶š‚Ì’·‚³‚Í%d ‚Å‚·B\n",len);
		     printf("•¶š—ñ“ü—Í?");
	}
}
#include<stdio.h>
#define size 50
void main(void){
	char s[]="abcdefghijklmnopqrstuvwzyz";
	char c[10];
	int i;
	printf("input ?");scanf("%s",c);
	for(i=0;s[i]!='\0';i++){
		if(s[i]==c[0]){
			printf("%c �� %s�Ɋ܂܂�Ă��܂��B\n",c[0],s);
			return;
		}
	}
	
	
	printf("%c �� %s�Ɋ܂܂�Ă��܂���B\n",c[0],s);
}
#include <stdio.h>
#include <stdlib.h>
int str_to_int(char*);
int str_to_int(char *p){
	*p='\0';
}
void main(){
	char s[]="ABCDE";
	printf("文字列は\"%s\" です.\n",s);
	str_to_int(s);
	printf("文字列は\"%s\" です.\n",s);
}
	
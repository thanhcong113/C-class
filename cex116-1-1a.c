#include <stdio.h>
#include <stdlib.h>
int str_to_int(char*);
int str_to_int(char *p){
	*p='\0';
}
void main(){
	char s[]="ABCDE";
	printf("�������\"%s\" �ł�.\n",s);
	str_to_int(s);
	printf("�������\"%s\" �ł�.\n",s);
}
	
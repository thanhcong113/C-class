#include <stdio.h>
#include <stdlib.h>
int str_to_int(char*);
int str_to_int(char *p){
	*p='\0';
}
void main(){
	char s[]="ABCDE";
	printf("•¶Žš—ñ‚Í\"%s\" ‚Å‚·.\n",s);
	str_to_int(s);
	printf("•¶Žš—ñ‚Í\"%s\" ‚Å‚·.\n",s);
}
	
#include <stdio.h>
#include <stdlib.h>
int str_to_int(char*);
int str_to_int(char *ep){
	
	int n=0;
	while(*ep!='\0'){
		if(*ep=='a'){
			n++;
	}
	*ep++;
	//return n;
}
return n;
}
void main(){
	int len;
	char s[]="pen-pineapple-apple-pen";
	len=str_to_int(s);
	printf("•¶Žš—ñ‚Í\"%s\" ‚Å‚·.\n",s);
	//str_to_int(s);
	printf("•¶Žš—ñ‚Í\"%s\"‚Ì'a' ‚Í %d ‚ªŒ©‚Â‚©‚è‚Ü‚µ‚½.\n",s,len);
}
	
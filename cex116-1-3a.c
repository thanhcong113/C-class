#include <stdio.h>
#include <stdlib.h>
void str_to_int(char*,char*);
void str_to_int(char *d,char*s){
	while(*s!='\0'){
		if(*s>='a'&&*s<='z'){
			*d='A'+*s-'a';
		}
		else{
			*d=*s;
		}
		s++;
		d++;
	}
	*d='\0';
	
}
void main(){
	char s[]="aBcDeFgHiJkLmNoPqRsTuVwXyZ0123456789";
	char buf[100];
	str_to_int(buf,s);
	printf("文字列を大文字に変換=\"%s\" です.\n",buf);
	//str_to_int(s);
	//printf("文字列は\"%s\" です.\n",s);
}
	
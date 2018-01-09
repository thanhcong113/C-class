#include<stdio.h>
#include<string.h>
void main(){
	char s[50];
	char *x="ABC";
	
	
		strcpy(s,x);strcat(s,"DEF");printf("s = %s\n",s);
		
		strcpy(s,x);strcat(s,"1234",3);printf("s = %s\n",s);
		strcpy(s,x);strcat(s,"1234",4);printf("s = %s\n",s);
		strcpy(s,x);strcat(s,"1234",5);printf("s = %s\n",s);
	}

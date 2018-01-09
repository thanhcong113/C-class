#include<stdio.h>
//#define BUF 100
#include<string.h>
void main(){
	char s[50];
	strcpy(s,"ABCDEFGHIJ");strncpy(s,"123",2);printf("s=%s\n",s);
	strcpy(s,"ABCDEFGHIJ");strncpy(s,"123",3);printf("s=%s\n",s);
	strcpy(s,"ABCDEFGHIJ");strncpy(s,"123",4);printf("s=%s\n",s);
	
	
}
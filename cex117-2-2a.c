#include<stdio.h>
#include<string.h>
void main(){
	char s[50];
	char t[10];
	printf("���O�i�P�O���ȓ��j ");
	scanf("%s",s);
	//char *x = "ABC";
	
	
		strncpy(t,s,10);
		printf("t = %s ���񂢂���\n",t);
}
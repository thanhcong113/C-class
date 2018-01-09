#include<stdio.h>

void main(void){
	char s[50];
	int i=0;
	printf("input?");
	scanf("%s",s);
		printf("before =%s ",s);
		printf("\n");
	for(i=3;i<13;i++){
		s[i]='N';
	}
	printf("after = %s",s);
}
	
		

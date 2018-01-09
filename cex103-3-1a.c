#include<stdio.h>

void main(void){
	char s[50];
	int i=0;
	printf("input?");
	scanf("%s",s);
		printf("before = ");
	for(i=0;i<11;i++){
		printf("%c",s[i]);}
		printf("\n");
			printf("after = ");
		
			s[5]='\0';
		printf("%s",s);
		

}

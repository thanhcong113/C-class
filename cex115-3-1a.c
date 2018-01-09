#include<stdio.h>
void main (){
	char str[100];
	//char str2[];
	int i;
	i=0;
	printf("?");
	scanf("%s",&str);
	do{
		printf("%c ",&str[i]);
	}while(str[i++]!= '\0');
	printf("\n");
	
	printf("str2 = ");
	do{
		printf("%c ",&str[i]+32);
	}while(str[i++]!='\0');
	printf("\n");
}
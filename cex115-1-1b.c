#include<stdio.h>
void main (){
	//char str1[]={'H','e','l','l','o','\0'};
	char str[]="Hello";
	char *sp="Hello";
	int i=0;
	printf("str = ");
	do{
		printf("%p ",&str[i]);
	}while(str[i++]!= '\0');
	printf("\n");
	i=0;
	printf("sp = ");
	do{
		printf("%p ",sp+i);
	}while(str[i++]!='\0');
	printf("\n");
}
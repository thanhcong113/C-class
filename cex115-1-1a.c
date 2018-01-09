#include<stdio.h>
void main (){
	char str1[]={'H','e','l','l','o','\0'};
	char str2[]="Hello";
	int i;
	i=0;
	printf("str1 = ");
	do{
		printf("%p ",&str1[i]);
	}while(str1[i++]!= '\0');
	printf("\n");
	i=0;
	printf("str2 = ");
	do{
		printf("%p ",&str2[i]);
	}while(str2[i++]!='\0');
	printf("\n");
}
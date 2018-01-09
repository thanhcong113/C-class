#include<stdio.h>
void main (){
	//char str1[]={'H','e','l','l','o','\0'};
	char str[]="Hello";
	char *sp="Hello";
	int i;
	printf("str = %s\n ",str);
	printf("sp = %s\n",sp);
	printf("str = ");
	for(i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	}
	printf("\n");
	printf("sp[] = ");
	for(i=0;str[i]!='\0';i++){
		printf("%c",sp[i]);
	}
	printf("\n");
}
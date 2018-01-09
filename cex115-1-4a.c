#include<stdio.h>
void main (){
	//char str1[]={'H','e','l','l','o','\0'};
	char str[]="Hello";
	char *sp="Hello";
	int i;
	printf("str = %s\n ",str);
	printf("sp = %s\n",sp);
	str="Goodby";
	sp="Goodby";
	printf("str = %s\n ",str);
	printf("sp = %s\n",sp);
}

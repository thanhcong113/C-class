#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char c[100];
	char a[1000];
	char *pt1,*pt2;
	printf("?");
	scanf("%s",c);
	pt1=&c[0];
	pt2=&a[0];
	
	while (*pt1!='^Z'){
		printf("?");
		scanf("%s",a);
	 strcat(c,a);
	}
	printf("%s\n",c);
}
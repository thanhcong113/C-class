#include<stdio.h>
void main(void){
	char s1[]={'H','e','l','l','o','\0'};
	char s2[]="Hello";
	int i;
	printf("s1=%s\n",s1);
	for(i=0;i<6;i++)printf("%d ",s1[i]);
	printf("\n");
	printf("s2=%s\n",s2);
	for(i=0;i<6;i++)printf("%d ",s2[i]);
	printf("\n");
}
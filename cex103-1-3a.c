#include<stdio.h>
#define size 10
void main(void){
	char s1[]="";
	char s2[size];
	char s3[size]="";
	int i;
	printf("s1=");
	for(i=0;i<size;i++)printf("%d ",s1[i]);
	printf("\n");
	printf("s2=");
	for(i=0;i<size;i++)printf("%d ",s2[i]);
	printf("\n");
	printf("s3=");
	for(i=0;i<size;i++)printf("%d ",s3[i]);
	printf("\n");
}
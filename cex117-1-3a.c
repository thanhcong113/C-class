#include<stdio.h>
//#define BUF 100
#include<stdlib.h>
void main(){
	char s1[]="56";
	char s2[]="42.65";
	char s3[]="78.5E3";
	printf("%s �� atoi �ŕϊ� = %d\n",s1,atoi(s1));
	printf("%s �� atoi �ŕϊ� = %f\n",s2,atof(s2));
	printf("%s �� atoi �ŕϊ� = %f\n",s3,atof(s3));
	
	
}
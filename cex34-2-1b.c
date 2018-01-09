#include<stdio.h>
void main(void){
	int n,i=0,j;
	printf("n=");scanf("%d",&n);
	j=n/7;
	for (i=0;i<j;i++){
	printf("*******\n");
	}
	for (i=0;i<n%7;i++){
	printf("*");
	}
}
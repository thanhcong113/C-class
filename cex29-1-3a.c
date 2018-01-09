#include<stdio.h>
#include<conio.h>
void main(void){
	int i,n;
	printf("n=");
	scanf("%d",&n);
	do{
		printf("*");
	}while(--n>0);
	printf("\n");
}
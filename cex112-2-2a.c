#include<stdio.h>
void main(){
	int x;
	int *p;
	printf("input?");scanf("%d",&x);
	*p=x;
	printf("n=%d",*p);
}
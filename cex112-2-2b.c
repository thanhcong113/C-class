#include<stdio.h>
void main(){
	int x;
	int *p;
	printf("input?");scanf("%d",&x);
	*p=x;
	if (*p>100) printf("n = %d",*p=100);
	else if(*p<0) printf("n = %d",*p=0);
	else {printf("n = %d",*p);}
}
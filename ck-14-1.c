#include<stdio.h>
#include<conio.h>
void main(void){
	int n;
	int m=-1;
	do{
		printf("n=");
		scanf("%d",&n);
		m++;
	}
	while(n>=0);
	printf("m=%d\n",m);
}
	
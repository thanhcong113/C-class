#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,n;
	
	do{
		printf("n=");
	scanf("%d",&n);
	sum=sum+n;
	}
	while(n>0);
	printf(" sum =%d",sum);
}
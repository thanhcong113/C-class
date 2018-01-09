#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,n,count=0;
	
	do{
		printf("n=");
	scanf("%d",&n);
	count++;
	sum=sum+n;
	}
	while(n!=0);
	printf(" sum =%d",sum);
	printf(" average =%d",sum/count);
	
}
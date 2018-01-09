#include<stdio.h>
#include<conio.h>
void main(void){
	double sum=0,n,count=0;
	
	do{		printf("n=");
	scanf("%lf",&n);
	count++;
	sum=sum+n;
	
	}
	while(n>0);
	printf(" sum =%lf",sum);
	printf(" average =%lf",sum/count);
	
}
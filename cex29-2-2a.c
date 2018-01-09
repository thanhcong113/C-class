#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,i=0,n;
	
	do{
		printf("n=");
	scanf("%d",&n);
	sum=sum+i;
	i=i+3;
	}
	while(sum<n);
	printf(" sum =%d",sum);
}
	
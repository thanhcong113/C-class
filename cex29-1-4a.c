#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,n=100,i=0;

	do{
		sum+=i++;
		
	}while(i<=n);
	printf("sum 1 to %d=%d\n",n,sum);
}
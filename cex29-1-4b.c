#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,n=100,i=1;

	do{
		
		sum += i;
		i+=2;
		
	}while(i==n);
	printf("sum 1 to %d=%d\n",n,sum);
}
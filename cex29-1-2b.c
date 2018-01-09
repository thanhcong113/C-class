#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,n=100,i;
	i=n;

	do{
		sum+=i--;
		
	}while(i>=0);
	printf("%d+....+2+1=%d\n",n,sum);
}
#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0;
	int n;
	int i=1;
	printf("n?");scanf("%d",&n);
	do{
		
		sum +=i++;
	}
	while(i<=n);
	printf("1+2+3+.....+%d=%d\n",n,sum);
}
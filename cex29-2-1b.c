#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,i=0,n;
	int s[100];
	do{
		printf("n=");
	scanf("%d",&n);
	s[i] = n;
	printf("s[%d]=%d\n",i,n);
	sum = sum+n;
	i=i+1;
	}
	while(n>=0);
	printf("sum = %d",sum);
}
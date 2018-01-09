#include<stdio.h>
#include<conio.h>
void main(void){
	int sum=0,i,n,m;
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	if(m>n){
		i=n;
	do{
		sum+=i++;
		
	}while(i<=m);
	printf("sum %d to %d=%d\n",n,m,sum);
	}
}
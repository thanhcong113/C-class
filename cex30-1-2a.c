#include<stdio.h>
void main(void){
	int n;
	int sum=0;
	do{
		printf("n=");
    scanf("%d",&n);
    sum+=n;
}
while(n!=0);
printf("sum =%d",sum);
}

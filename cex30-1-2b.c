#include<stdio.h>
void main(void){
	int n=1000;
	int sum=0;
	do{
		n-=10;
    sum+=n;
}
while(n>0);
printf("sum =%d",sum);
}

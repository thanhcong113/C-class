#include<stdio.h>
void main(void){
	double n;
	double sum=0;
	do{
		printf("n=");
    scanf("%lf",&n);
    sum+=n;
}
while(n!=0);
printf("sum =%lf",sum);
}

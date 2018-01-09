#include<stdio.h>
void main(void){
	double n,i=0;
	double sum=1;
	printf("n=");
    scanf("%lf",&n);
	do{
    sum+=i;
		i++;
}
while(n>=i);
printf("sum =%lf",sum);
}

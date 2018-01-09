#include<stdio.h>

void main(void){
	int sum=0,i;
	for(i=1;i<=100;i++){
		if (i%7==0) sum+=i;
	}
	printf("sum=%d",sum);
}
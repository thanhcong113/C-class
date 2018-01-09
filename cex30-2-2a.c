#include<stdio.h>
void main(void){
	int avr,sum,i=0;
	int a[]={80,90,95,75,80,85,30,65,0,70,100,95,85,25,95,85,65,95,75,80,-99};
	sum=0;
	do{
		sum+=a[i];
    
}
while(a[i++]>=0);
avr=sum/i;
printf("number of data  =%d\n",i);
printf("average =%d\n",avr);
}

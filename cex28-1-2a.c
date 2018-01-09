#include<stdio.h>
void main(void)
{
	int a[]={50,60,70,75,80,85,30,65,0,23,100,90,20,25,95,85,65,75,-1};
	int i=0,avr,sum;
	sum=0;
	
	while(a[i]>=0){
		sum+=a[i];
		i++;
	}
	avr=sum/i;
	printf("number of data =%d\n",i);
	printf("average=%d\n",avr);
}
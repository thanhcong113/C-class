#include<stdio.h>
void main(void){
	double data;
	double sum=0;
	int n=0;
	do{
		printf("data=");
		scanf("%lf",&data);
if (data>=0){
	sum+=data;
	n++;
}
	}while(data>=0);
	printf("sum = %f\n",sum);
	printf("average=%f\n",sum/n);
}
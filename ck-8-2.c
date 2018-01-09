#include <stdio.h>
void main(void)
{
	double height,weight,bmi;
	printf("height(m)=");
	scanf("%lf",&height);
	printf("weight(kg)=");
	scanf("%lf",&weight);
	
	bmi= weight/(height*height);
	printf("bmi=%lf\n",bmi);
	if (bmi<18.5){
		printf("Thin\n");
	}
	else if (bmi<25){
		printf("Normal\n");
	}
	else{
		printf("Fat\n");
	}
}
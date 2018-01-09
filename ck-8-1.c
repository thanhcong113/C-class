#include <stdio.h>
void main(void)
{
	double height,weight,bmi;
	printf("height(m)=");
	scanf("%lf",&height);
	printf("weight(kg)=");
	scanf("%lf",&weight);
	
	bmi= weight/(height*height);
	printf("bmi=%lf",bmi);
	if((bmi>=21.5)&&(bmi<22.5)){
		printf("standard\n");
	}
}
	
#include <stdio.h>
void main(void)
{
	double m,h;
	printf("�̏d=");
	scanf("%lf",&m);
	printf("�g��=");
	scanf("%lf",&h);
	
	printf("BMI=%lf\n",m/h*h);
}
#include<stdio.h>
void main(void)
{
	float f1=1.23456789,f2=999999;
	double d1=1.23456789,d2=999999;
	float af1,af2;
	double ad1,ad2;
	af1=f1*f2;
	af2=d1*d2;
	ad1=d1*d2;
	ad2=f1*f2;
	printf("af1=%f\n",af1);
	printf("af2=%f\n",af2);
	printf("ad1=%f\n",ad1);
	printf("ad2=%f\n",ad2);
}
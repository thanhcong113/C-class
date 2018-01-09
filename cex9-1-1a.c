#include<stdio.h>
void main(void)
{
	float data1=7.1,data2=3.0;
	float ans1,ans2;
	double data3=123456789.012345;
	double data4=2.0;
	double ans3,ans4;
	
	
	
	ans1=data1/data2;
	ans2=data1*data2;
	ans3=data3*data4;
	ans4=data3*data4;
	printf("%f/%f=%f\n",data1,data2,ans1);
	printf("%f*%f=%f\n",data1,data2,ans2);
	printf("%f/%f=%f\n",data3,data4,ans3);
	printf("%f*%f=%f\n",data3,data4,ans4);
}
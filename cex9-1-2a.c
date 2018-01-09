#include<stdio.h>
void main(void)
{
	double data1,data2;
	double ans1,ans2,ans3,ans4;
	
	printf("data1=");
	scanf("%lf",&data1);
	printf("data2=");
	scanf("%lf",&data2);
	ans1=data1+data2;
	ans2=data1-data2;
	ans3=data1*data2;
	ans4=data1/data2;
	printf("%lf+%lf=%lf\n",data1,data2,ans1);
	printf("%lf-%lf=%lf\n",data1,data2,ans2);
	printf("%lf*%lf=%lf\n",data1,data2,ans3);
	printf("%lf/%lf=%lf\n",data1,data2,ans4);
}
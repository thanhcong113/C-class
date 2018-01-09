#include<stdio.h>
void main(void)
{
	
	double data1=123456789.012345;
	double data2=0.001;
	double data3=3.0,data4=23456.0;
	double ans1, ans2, ans3, ans4;
	
	
	
	ans1=data1*data2-data3;
	ans2=data1*(data2-data3);
	ans3=data3+data4*data2;
	ans4=(data3+data4)*data2;
	printf("ans1=%f\n",ans1);
	printf("ans2=%f\n",ans2);
	printf("ans3=%f\n",ans3);
	printf("ans4=%f\n",ans4);
}
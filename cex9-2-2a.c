#include<stdio.h>
void main(void)
{
	double x1,x2,x3;
	double x4,x5,x6;
	int i=6,j=25,k=10;
	double di=6.0,dj=25.0,dk=10.0;
	x1=i/j*k;
	x2=i/j*dk;
	x3=di/dj*k;
	printf("x1=%f\n",x1);
	printf("x2=%f\n",x2);
	printf("x3=%f\n",x3);
	
	x4=(double)(i/j*k);
	x5=(double)i/j*dk;
	x6=di/dj*dk;
	printf("x4=%f\n",x4);
	printf("x5=%f\n",x5);
	printf("x6=%f\n",x6);
}
	
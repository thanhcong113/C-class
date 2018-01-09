#include<stdio.h>
void main(void)
{
	double x,y,ds;
	double x0=-2.0;
	double dx=0.001;
	double s=0;
	int n=4001;
	int i;
	x=x0;
	for(i=0;i<n;i++){
	y=x*x;
	ds=dx*y;
	s+=ds;
	x+=dx;
	}
	printf("x=%f y=%f s=%f\n",x,y,s);
}
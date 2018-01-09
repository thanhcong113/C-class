#include <stdio.h>
void circle(int, double *,double *);
void circle(int r,double *len,double *area)
{
	*len = 2*r*3.14;
	*area = r*r*3.14;
}
void main()
{
	int r;
	double l,a;
	r = 10;
	circle(r,&l,&a);
	printf("‰~F”¼Œa=%d , ‰~ü=%.2fA–ÊÏ=%2f\n",r,l,a);
}
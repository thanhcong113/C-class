#include<stdio.h>
void main(void)
{ 
double x[]={2.1,3.3,1.5,4.0,2.5};
double a,b,c;
int i=0;
a=x[2]+x[4]*2;
b=x[3]-x[0]+x[4];
c=x[i+1]*2;
printf("a=%f b=%f c=%f\n",a,b,c);
}
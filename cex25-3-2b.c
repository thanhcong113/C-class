#include<stdio.h>
void main(void)
{
	double data[]={1.512,1.781,2.401,-1.331,2.127,0.333};
	double i,sum,tb;
	for(i=0;i<7;i++)
	{
		sum+=data[i];
	}
	printf("���v=%7.3f\n",sum);
	printf("����=%7.3f\n",sum/6);
}

	
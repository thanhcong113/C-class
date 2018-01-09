#include<stdio.h>
void main(void)
{
	int n[5];
	int d=5;
	printf("%d %d %d %d %d\n",n[0],n[1],n[2],n[3],n[4]);
	n[0]=d;
	n[1]=n[0]+d;
	n[2]=n[1]+2*d;
	n[3]=n[2]+3*d;
	n[4]=n[3]-n[2]-n[1]-n[0];
	printf("%d %d %d %d %d\n",n[0],n[1],n[2],n[3],n[4]);
}
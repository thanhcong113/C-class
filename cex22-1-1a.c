#include<stdio.h>
void main(void)
{
	int n[]={5,12,8,21,9};
	int d;
	printf("%d %d %d %d %d\n",n[0],n[1],n[2],n[3],n[4]);
	d=n[0];
	n[0]=n[4];
	n[4]=d;
	printf("%d %d %d %d %d\n",n[0],n[1],n[2],n[3],n[4]);
}
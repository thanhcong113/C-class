#include<stdio.h>
void main(void)
{
	int i=0;
	int j=100;
	int n,m;
	n=i++;
	m=j--;
	printf("n=%d i=%d m=%d j=%d\n",n,i,m,j);
	i=0;
	j=100;
	n=++i;
	m=--j;
printf("n=%d i=%d m=%d j=%d\n",n,i,m,j);
}
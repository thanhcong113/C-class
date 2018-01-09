#include<stdio.h>
void main(void)
{
	int i=0;
	int j=100;
	int n=0,m=0;
	n=n+i++;
	m=m+j--;
	printf("n=%d i=%d m=%d j=%d\n",n,i,m,j);
	
	n=n+++i;
	m=m+--j;
printf("n=%d i=%d m=%d j=%d\n",n,i,m,j);
}
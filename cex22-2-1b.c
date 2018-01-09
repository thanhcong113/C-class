#include<stdio.h>
void main(void)
{
	int n[5]={5,12,8,21,9};
	int d=4;
	printf("%d %d %d %d %d\n",n[0],n[1],n[2],n[3],n[4]);
	printf("n[%d] = %d ",d,n[d]);
	d--;
	printf("n[%d] = %d ",d,n[d]);
	d--;
	printf("n[%d] = %d ",d,n[d]);
	d--;
	printf("n[%d] =  %d ",d,n[d]);
	d--;
  printf("n[%d] = %d ",d,n[d]);
	printf("\n");
}
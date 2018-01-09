#include<stdio.h>
void main(void)
{
	int i,j,k,l;
	int x,y,z;
	printf("i=\n");
	scanf("%d",&i);
	printf("j=\n");
	scanf("%d",&j);
	printf("k=\n");
	scanf("%d",&k);
	printf("l=\n");
	scanf("%d",&l);
	x=i+j*k-1;
	y=(j&k)*(i|1);
	z=++i+j&k-1;
	printf("x=%d y=%d z=%d\n",x,y,z);
}
	
	
	
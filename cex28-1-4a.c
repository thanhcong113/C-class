#include<stdio.h>
void main(void)
{
	int i,n;
	int a[]={17,23,36,0,0,-1};
	i=0;
	while(a[i]>=0){
		i++;
	}
	n=i;
	printf("    i    a\n");
	printf("----------\n");
	for(i=0;i<n;i++)
	{
		printf("%4d%4d\n",i,a[i]);
	}
}
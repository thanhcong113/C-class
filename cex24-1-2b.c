
#include<stdio.h>
void main(void)
{
	int i;
	int d=1;
	int a[10];
	a[0]=0;
	
	for(i=1;i<=10;i++){
		a[i]=a[i-1]+d++;
	}
	for(i=1;i<=10;i++){
	printf("a[%d]=%d\n",i,a[i]);
	
	}
	
}
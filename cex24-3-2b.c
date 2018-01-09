#include<stdio.h>
void main(void)
{
	int a[]={121,256,32,1024,12,56,7,255,99,112};
	int i;
	for(i=0;i<10;i++){
		if(a[i]%3==0) 
		printf("a[%d]=%d\n",i,a[i]);
	}
}
#include<stdio.h>
void main(){
	double n[5]={24.8,37.2,10.5,64.8,12.9};
	double *p;
	int i;
	for(i=0;i<5;i++) 
	{
		*p=n[i];
		printf("%.1f ",*p); 
	
}
printf("\n");
}
		
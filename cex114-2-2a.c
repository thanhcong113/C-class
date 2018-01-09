#include<stdio.h>
#define size 5
void printf_array(int *,int num);
double sum_array(double *,double);
void printf_array(int a[],int num){
	int i;
	for ( i=0;i<num;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
double sum_array(double *p,double num){
	int i;
	double sum=0;
	for(i=0;i<num;i++){
		sum+=*(p+i);
	}
	return sum;
}
	
void main(){
	double n[size]={10.3,8.53,20.61,4.2,15.9};
	//printf_array(n,size);
	
	
	
	printf("‡Œv= %.2f\n",sum_array(n,size);
}


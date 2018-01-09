#include<stdio.h>
#define size 5
void printf_array(int *,int num);
int sum_array(int *,int);
void printf_array(int a[],int num){
	int i;
	for ( i=0;i<num;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int sum_array(int *p,int num){
	int i;
	int sum=0;
	for(i=0;i<num;i++){
		sum+=*(p+i);
	}
	return sum;
}
	
void main(){
	int n[size]={10,8,20,4,15};
	//printf_array(n,size);
	
	
	printf_array(n,size);
	printf("‡Œv= %d\n",sum_array(n,size);
}


#include<stdio.h>
#define size 10
void printf_array(int *,int num);
void copy_array(int *,int*,int);
void printf_array(int a[],int num){
	int i;
	for ( i=0;i<num;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void copy_array(int *p1,int *p2,int num){
	int i;
	for(i=0;i<num;i++){
		*(p2+i)=*(p1+i);
	}
}
	
void main(){
	int a[size]={14,25,8,50,4,9,32,78,54,45};
	//printf_array(n,size);
	int b[size];
	copy_array(a,b,size);
	printf_array(b,size);
}


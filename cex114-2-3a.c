#include<stdio.h>
#define size 10
void printf_array(int *,int num);
void clear_array(int *,int);
void printf_array(int a[],int num){
	int i;
	for ( i=0;i<num;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void clear_array(int *p,int num){
	int i;
	for(i=0;i<num;i++){
		*(p+i)=99;
	}
}
	
void main(){
	int n[size];
	printf("���Z�l = 99\n");
	
	clear_array(n,size);
	printf_array(n,size);
}


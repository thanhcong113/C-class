#include<stdio.h>
#define size 5
void printf_array(int *,int num);
void input_array(int *,int);
void printf_array(int a[],int num){
	int i;
	for ( i=0;i<num;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void input_array(int *p,int num){
	int i;
	for(i=0;i<num;i++){
		printf("n[%d]",i); scanf("%d",p+i);
	}
}
	
void main(){
	int n[size];
	//printf_array(n,size);
	input_array(n,size);
	printf_array(n,size);
}


#include<stdio.h>
#define size 5
void printf_array(int *,int num);

void printf_array(int a[],int num){
	int i;
	for ( i=0;i<num;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void main(){
	int n[size]={10,8,20,4,15};
	printf_array(n,size);
}


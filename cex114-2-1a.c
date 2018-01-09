#include<stdio.h>
#define size 5
void printf_array(int *p,int num);
void printf_array(int *p,int num){
	int i;
	for ( i=0;i<num;i++){
		printf("%d ",*(p+i));
	}
	printf("\n");
}
void main(){
	int n[size]={0,1,2,3,4};
	printf_array(n,size);
}


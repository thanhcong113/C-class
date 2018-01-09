#include<stdio.h>
#define size 10
void main(){
	double n[size]={4.29,9.54,2.1,43.6,25.7};
	int i;
	for(i=0;i<size;i++){
		printf("%7.2f ",n[i]);
	}
	printf("\n");
}
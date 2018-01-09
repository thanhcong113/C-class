#include<stdio.h>
#define size 7
void main(){
	double n[size]={83.2,10.2,57.2,36.9,32.2,19.0,76.3};
	int i;
	for(i=0;i<size;i++){
		printf("%7.2f ",n[i]);
	}
	printf("\n");
}
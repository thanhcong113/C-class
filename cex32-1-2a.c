#include<stdio.h>

void main(void){
	int n;
	for (n=0;n<10;n++){
		if(n==5) continue;
		printf(" %d",n);
	}
	printf("\n");
}
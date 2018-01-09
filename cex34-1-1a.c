#include<stdio.h>
void main(void){
	int i,j;
	for (i=0;i<10;i++){
		printf("i=%2d:j=",i);
		for (j=0;j<10;j++){
		printf(" %2d",j);
	}
	printf("\n");
}
}
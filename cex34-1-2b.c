#include<stdio.h>
void main(void){
	int a[10][10],i,j;
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			a[i][j]=i*j;
		}
	}
	printf("a[][]\n");
		for (i=0;i<10;i++){
		for (j=0;j<10;j++){
		
		printf(" %3d",a[i][j]);
		}
		printf("\n");
	}
	
}
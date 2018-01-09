#include<stdio.h>
#define col 9
#define row 9
void main(void){
	int data[row][col];
	
	int i,j;
	for(i=0;i<row;i++){

		for(j=0;j<col;j++){ data[j][i]=(i+1)*(j+1);
	}
	}
	printf("  |");
	for(j=0;j<col;j++) printf("%4d",j+1);
	printf("\n");
	printf("----");
	for(j=0;j<col;j++) printf("----");
	printf("\n");
	for(i=0;i<row;i++) {
		printf("%2d |",i+1);
		for(j=0;j<col;j++) printf("%4d",data[i][j]);
		printf("\n");
	}
	}
		
	
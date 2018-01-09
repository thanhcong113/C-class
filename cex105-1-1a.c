#include<stdio.h>
#define col 4
#define row 3

void main(void){
	int data[row][col]={
		{0,1,2,3},
		{10,11,12,13},
		{20,21,22,23}};
	
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%02d ",data[i][j]);
		}
		printf("\n");
	}
}
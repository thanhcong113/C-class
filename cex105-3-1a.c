#include<stdio.h>
#define col 2
#define row 4

void main(void){
	int data[row][col];
		

int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("data[%d][0] data[%d][1] ?\n",i,i);
	
			//for(i=0;i<row;i++){
		//for(j=0;j<col;j++){
	//printf("data[%d][%d]?",i,j);
	scanf("%d",&data[i][j]);
	}
		}
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%02d ",data[i][j]);
		}
		printf("\n");
	}
}
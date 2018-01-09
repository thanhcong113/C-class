#include<stdio.h>
#define col 2
#define row 5

void main(void){
	int data[row][col]={
		{79,55},
		{89,65},
		{76,85},
		{55,78},
		{82,74}};
	
	int i,j;
	printf("”Ô†@“ú–{Œê@CŒ¾Œê\n");
	printf("-------------------\n");
	for(i=0;i<row;i++){
		printf("%4d ",i);
		for(j=0;j<col;j++){
			printf("%6d ",data[i][j]);
		}
		printf("\n");
	}
}
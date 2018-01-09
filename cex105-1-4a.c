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
	
	int i,n;
	printf("”Ô†?");scanf("%d",&n);
	
	while(n>=0&&n<row){
			printf("“ú–{ŒêF%d CŒ¾ŒêF%d\n",data[n][0],data[n][1]);
			printf("”Ô†?");scanf("%d",&n);
		}
		
}
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
	printf("番号?");scanf("%d",&n);
	
	while(n>=0&&n<row){
			printf("日本語：%d C言語：%d\n",data[n][0],data[n][1]);
			printf("番号?");scanf("%d",&n);
		}
		
}
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
	printf("�ԍ�?");scanf("%d",&n);
	
	while(n>=0&&n<row){
			printf("���{��F%d C����F%d\n",data[n][0],data[n][1]);
			printf("�ԍ�?");scanf("%d",&n);
		}
		
}
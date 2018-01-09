#include<stdio.h>
#define col 2
#define row 5
void sales(int);
void allsales(void);
int sale[row][col]={
	{79,55},
	{89,65},
	{76,85},
	{55,78},
	{82,74}};
	void sales(int n){
		int i;
		printf("%4d   ",n);
		for(i=0;i<col;i++){
			printf("%6d",sale[n][i]);
		}
		printf("\n");
	}
	void allsales(){
		int i;
		printf("番号　　日本語　　C言語\n");
		printf("=======================\n");
		for(i=0;i<row;i++){
			sales(i);
		}
	}
	void main(){
		allsales();
	}
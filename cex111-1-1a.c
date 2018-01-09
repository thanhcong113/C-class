#include<stdio.h>
#define col 6
#define row 3
void sales(int);
void allsales(void);
int sale[row][col]={
	{10,4,18,43,32,55},
	{20,50,21,90,32,65},
	{32,45,98,32,78,85}};
	void sales(int n){
		int i;
		printf("No.%-2d",n);
		for(i=0;i<col;i++){
			printf("%4d",sale[n][i]);
		}
		printf("\n");
	}
	void allsales(){
		int i;
		printf("商品　1月　2月　3月　4月　5月　6月\n");
		printf("===================================\n");
		for(i=0;i<row;i++){
			sales(i);
		}
	}
	void main(){
		allsales();
	}
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
	int sum(int n){
	int i;
	int sum=0;
	for(i=0;i<col;i++){
		sum+=sale[n][i];
	}
	return sum;
}
int max(int n){
	int i;
	int max;
	max=sale[n][0];
	for(i=1;i<col;i++){
		if(max<sale[i][n]){
			max=sale[i][n];
		}
	}
	return max;
}
	void sales(int n){
		int i;
		printf("%4d   ",n);
		for(i=0;i<col;i++){
			printf("%6d",sale[n][i]);
		}
		printf("%6d",sum(n));
		printf("\n");
	}
	void allsales(){
		int i;
		printf("番号　　日本語　　C言語  合計\n");
		printf("=======================\n");
		for(i=0;i<row;i++){
			sales(i);
		}
		printf("=======================\n");
		printf("最大値");
		for(i=0;i<col;i++){
			printf("%6d",max(i));
	}
	printf("\n");
	}
	void main(){
		allsales();
	}
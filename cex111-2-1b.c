#include<stdio.h>
#define col 2
#define row 5
void sales(int);
void allsales(void);
int sum(int);
int max(int);
int min(int);
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
	max=sale[0][1];
	for(i=1;i<row;i++){
		if(max<sale[n][i]){
			max=sale[n][i];
		}
	}
	return max;
}
int min(int n){
	int i;
	int min;
	min=sale[0][1];
	for(i=1;i<row;i++){
		if(min>sale[i][n]){
			min=sale[i][n];
		}
	}
	return min;
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
	
	printf("=======================\n");
		printf("最小値");
		for(i=0;i<col;i++){
			printf("%6d",min(i));
	}
	printf("\n");
	printf("\n");
	}
	void main(){
		allsales();
	}
#include<stdio.h>
#define col 6
#define row 3
void sales(int);
void allsales(void);
double sum(int);
int max(int);
int min(int);
double ave(int);
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
		printf("  %.0f",sum(n));
		printf("  %4d",max(n));
		printf("  %4d",min(n));
		printf("  %.2f",sum(n)/6);
		printf("\n");
	}
	double sum(int n){
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
		if(max<sale[n][i]){
			max=sale[n][i];
		}
	}
	return max;
}
int min(int n){
	int i;
	int min;
	min=sale[n][0];
	for(i=1;i<col;i++){
		if(min>sale[n][i]){
			min=sale[n][i];
		}
	}
	return min;
}
	void allsales(){
		int i;
		printf("商品　1月　2月　3月　4月　5月　6月   合計  最大  最小 平均\n");
		printf("===================================\n");
		for(i=0;i<row;i++){
			sales(i);
		}
	}
	void main(){
		allsales();
	}
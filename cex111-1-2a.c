#include<stdio.h>
#define col 6
#define row 3
int sum(int);
int max(int);
void sales(int);
int sale[row][col]={
	{10,4,18,43,32,55},
	{20,50,21,90,32,65},
	{32,45,98,32,78,85}};
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
		if(max<sale[n][i]){
			max=sale[n][i];
		}
	}
	return max;
}
void sales(int n){
		int i;
		printf("No.%-2d",n);
		for(i=0;i<col;i++){
			printf("%4d",sale[n][i]);
		}
		printf("%4d",sum(n));
		printf("%4d",max(n));
		printf("\n");
}
void allsales(){
		int i;
		printf("商品　1月　2月　3月　4月　5月　6月 合計　最大\n");
		printf("===================================\n");
		for(i=0;i<row;i++){
			sales(i);
		}
	}
	void main(){
		allsales();
	}
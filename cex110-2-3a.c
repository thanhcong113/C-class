#include<stdio.h>
double max(int,int,int);
double max(int x,int y,int z){
	
	int n;
	n=(x+y+z)/3;
	return n;
}
void main(void){
	int a,b,c;
	double m;
	printf("数値 1 数値 2 数値 3 ?");
	scanf("%d %d %d",&a,&b,&c);
	m=max(a,b,c);
	printf("%d %d %d の平均は %.2f です\n",a,b,c,m);
	
}

#include<stdio.h>
int min(int,int,int);
int min(int x,int y,int z){
	int min=x;
	if(min>y) min=y;
	if(min>z) min=z;
	return min;
}
void main(void){
	int a,b,c,m;
	printf("数値 1 数値 2 数値 3 ?");
	scanf("%d %d %d",&a,&b,&c);
	m=min(a,b,c);
	printf("%d %d %d を比べて 小さい方は %d です\n",a,b,c,m);
	
}

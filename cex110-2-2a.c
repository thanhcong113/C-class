#include<stdio.h>
int max(int,int);
int max(int x,int y){
	int max=x;
	if(max<y) max=y;
	return max;
}
void main(void){
	int a,b,m;
	printf("数値 1 数値 2 ?");
	scanf("%d %d",&a,&b);
	m=max(a,b);
	printf("%d と %d を比べて。大きい方は %d です\n",a,b,m);
	
}

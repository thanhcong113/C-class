#include<stdio.h>
int max(int,int);
int max(int x,int y){
	int max=x;
	if(max<y) max=y;
	return max;
}
void main(void){
	int a,b,m;
	a=40;
	b=83;
	m=max(a,b);
	printf("%d と %d を比べて。大きい方は %d です\n",a,b,m);
}

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
	printf("”’l 1 ”’l 2 ”’l 3 ?");
	scanf("%d %d %d",&a,&b,&c);
	m=min(a,b,c);
	printf("%d %d %d ‚ğ”ä‚×‚Ä ¬‚³‚¢•û‚Í %d ‚Å‚·\n",a,b,c,m);
	
}

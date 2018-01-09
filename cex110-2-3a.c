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
	printf("”’l 1 ”’l 2 ”’l 3 ?");
	scanf("%d %d %d",&a,&b,&c);
	m=max(a,b,c);
	printf("%d %d %d ‚Ì•½‹Ï‚Í %.2f ‚Å‚·\n",a,b,c,m);
	
}

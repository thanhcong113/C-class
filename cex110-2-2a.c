#include<stdio.h>
int max(int,int);
int max(int x,int y){
	int max=x;
	if(max<y) max=y;
	return max;
}
void main(void){
	int a,b,m;
	printf("”’l 1 ”’l 2 ?");
	scanf("%d %d",&a,&b);
	m=max(a,b);
	printf("%d ‚Æ %d ‚ð”ä‚×‚ÄB‘å‚«‚¢•û‚Í %d ‚Å‚·\n",a,b,m);
	
}

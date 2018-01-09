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
	printf("%d ‚Æ %d ‚ð”ä‚×‚ÄB‘å‚«‚¢•û‚Í %d ‚Å‚·\n",a,b,m);
	a=92;
	b=13;
	printf("%d ‚Æ %d ‚ð”ä‚×‚ÄB‘å‚«‚¢•û‚Í %d ‚Å‚·\n",a,b,max(a,b));
}

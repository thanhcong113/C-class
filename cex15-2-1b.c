#include<stdio.h>
void main(void)
{
	int n;
	int m1=100,m2=100,m3=100,m4=100;
	printf("n=");
	scanf("%d",&n);
	m1=n>=20;
	m2=n<20&&n>=12;
	m3=n<=12&&n>=6;
	m4=n<6&&n>=3;
	if (m1) printf("せいじん\n");
	else if (m2) printf("せいねん\n");
	else if (m3) printf("しょうねん\n");
	else if (m4) printf("ようねん\n");
	else printf("にゅうじ\n");
}
	
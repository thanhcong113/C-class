#include <stdio.h>
void main(void)
{
	int x,y,m,n;
	printf("x=");
		scanf("%d",&x);
		printf("y=");
		scanf("%d",&y);
		m=x%2;
		n=y%2;
		if (m==0&&n==0) printf("even even\n");
		else if (m==1&&n==1) printf("odd odd\n");
		else if (m==0) printf("even odd\n");
		else printf("odd even\n");
}
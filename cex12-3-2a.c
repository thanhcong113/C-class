#include <stdio.h>
void main (void)
{
	int n;
	printf("n=");
	scanf("%d",&n);
	n=n+25;
	if (n<125)
	{
	n=n+25;
	}
	printf("%d",n);
}
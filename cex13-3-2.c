#include<stdio.h>
void main(void)
{
	int n;
	printf("age=");
	scanf("%d",&n);
	if (n<=28)
	{
		printf("平成うまれ");
	}
	else
	{
		printf("昭和うまれ");
	}
}
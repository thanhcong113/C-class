#include<stdio.h>
void main(void)
{
	int n;
	printf("n(0--100)=");
	scanf("%d",&n);
	if (n>=20){
		printf("��l\n");
	}
	else if (n>=7){
		printf("�q��\n");
	}
	else {
		printf("�c��\n");
	}
}
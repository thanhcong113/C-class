#include<stdio.h>
void main(void)
{
	int n;
	printf("age=");
	scanf("%d",&n);
	if (n>=20){
		printf("おとな");
	}
	else{
		printf("こども");
	}
}
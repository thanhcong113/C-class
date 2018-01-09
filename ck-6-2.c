#include<stdio.h>
void main(void)
{
	int n;
	printf("n=");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is eveb number\n",n);
	}
	else{
		printf("%d is odd number\n",n);
	}
}
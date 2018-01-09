#include<stdio.h>
void main(void){
	int n;
	int i;
	printf("n=");
	scanf("%d",&n);
	for (i=1;i<=n;i+=2){
		printf("%d",i);
	}
	printf("\n");
}
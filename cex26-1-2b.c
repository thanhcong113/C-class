#include<stdio.h>
void main(void){
	int n,count;
	int i;
	printf("n=");
	scanf("%d",&n);
	count=0;
	for (i=1;i<=n;i++){
		printf("%d\n",i);
		count++;
	}

	printf("%d �̂₭������%d���ł�\n",n,count);
}
#include<stdio.h>
void main(void){
	int n, max;
	printf("n=");
	scanf("%d",&max);
	if (max!=0){
		while(1){
			printf("n=");
	scanf("%d",&n);
	 if (max<n){
	 	max=n;
	 }
	 if (n==0) break;
		}
		printf("max=%d\n",max);
		}else{
			printf("nodata\n");
		}
	}
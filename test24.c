#include<stdio.h>
void main(void){
	int i,n,j;
	printf("n=");scanf("%d",&n);
	for(i=1;i<=n;i++){
		
	for(j=2*n-i;j>=1;j--){
		printf("*");
	}
	for(j=1;j<=i*2-1;j++){
		printf(" ");
	}
	
	printf("\n");
}
	}
	
		
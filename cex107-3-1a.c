#include<stdio.h>

void main (void){
	int i,n;
	printf("回数(1~5)？"); scanf("%d",&n);
	if(n<1||n>5){
	printf("回数不正です");

	}
	else 
	for(i=0;i<n;i++){
		printf("Hello world!\n");
		
}
}
#include<stdio.h>
void func(void);
void sig();

void func(){
	int i,n;
	printf("width�H"); scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("*");
	}
	printf("\n\n");
}


void main(void){
	func();
}
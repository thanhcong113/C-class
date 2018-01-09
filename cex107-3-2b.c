#include<stdio.h>
void func(void);
void sig();

void func(){
	int i,n;
	printf("width？"); scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("*");
	}
	printf("\n\n");
}
void sig(){
	func();
	printf("\tグエン　タイン　コン\n");
	func();
	
}
void main(void){
	sig();
}
#include<stdio.h>
void func(void);

void func(){
	static int n;
	
	printf("n=%d\n",n);
}
void main(void){
	
	func();
	func();
	func();
}
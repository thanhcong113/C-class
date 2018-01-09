#include<stdio.h>
void func(void);
int gn;
void func(){
	
	printf("func : gn = %d\n",gn);
}
void main(void){
	printf("func : gn = %d\n",gn);
	func();
	
	
}
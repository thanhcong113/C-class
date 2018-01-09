#include<stdio.h>
void func(void);
int gn=0;
void func(){
	gn=29;
	printf("func : gn = %d\n",gn);
}
void main(void){
	gn = 5;
	printf("main : gn=%d\n",gn);
	func();
	printf("main : gn=%d\n",gn);
}
#include<stdio.h>
void func(void);
void func(){
	int i;
	i=48;
	printf(" func : i = %d\n",i);
	
}
void main (void){
	int i;
	i=4;
	printf(" main i:%d\n",i);
	func();
	printf(" main : i= %d\n",i);
}
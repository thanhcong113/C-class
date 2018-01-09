#include<stdio.h>
void func(void);
char gs[50]="Hello";
void func(){
	
	printf("input?");scanf("%s",gs);
}
void main(void){
	printf("%s\n",gs);
	func();
	printf("%s\n",gs);
	
}
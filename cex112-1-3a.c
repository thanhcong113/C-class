#include<stdio.h>
void func(int *);
void func(int *px){
	*px=35;
}

void main(){
	int a=18;
	printf("a= %d\n",a);
	func(&a);
printf("a= %d\n",a);
}
	
#include<stdio.h>
void func(void);
int gn=99;
void func(){
	
	printf(" main gn = %d",gn);
}
void main(void){
	int gn=0;
	printf("ain : gn =%d\n",gn);
	
	printf("�֐�func���Ăяo���܂�\n");
	func();
	
}
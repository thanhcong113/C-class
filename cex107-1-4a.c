#include<stdio.h>
void func(void);
void func(){
	int i;
	for(i=0;i<5;i++){
	printf("����ɂ��́I%d ���\n",i+1);
	}
}
void main (void){
	int i;
for(i=0;i<2;i++){
	printf("Hello �֐��Ăяo��	%d�@���\n",i+1);
	func();
}
}
#include<stdio.h>
void func(void);
void sig();

void func(){
	int i;
	printf("\n");
	for(i=0;i<15;i++){
	printf("=*=");
	}
	printf("\n\n");
}
void sig(){
	func();
	printf("\t�O�G���@�^�C���@�R��\n");
	func();
	
}
void main(void){
	sig();
}
#include<stdio.h>
void func(void);
void func(){
	int i;
	for(i=0;i<5;i++){
	printf("こんにちは！%d 回目\n",i+1);
	}
}
void main (void){
	int i;
for(i=0;i<2;i++){
	printf("Hello 関数呼び出す	%d　回目\n",i+1);
	func();
}
}
#include<stdio.h>
void func(void);
void func(){
	int i,n;
	printf("あいさつ回数？"); scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("こんにちは！%d 回目\n",i+1);
	}
}
void main (void){
	int i,n=3;
for(i=0;i<n;i++){
	printf("Hello 関数呼び出す	%d　回目\n",i+1);
	func();
}
}
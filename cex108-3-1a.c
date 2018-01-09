#include<stdio.h>
void func();
int score[2][5];
void func(){
	int i=0;
	for(i=0;i<5;i++){
		printf("nhap so %d ",i+1);
		scanf("%d %d",&score[0][i],&score[1][i]);
	}
}
void main(void){
	int i=0;
	func();
	printf("番号　　英語　　C言語\n");
	printf("========================\n");
	//func();
	for(i=0;i<5;i++){
		printf(" %d |",i+1);
		printf("   %4d    %4d \n",score[0][i],score[1][i]);
	
	}
}
	

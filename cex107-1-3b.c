#include<stdio.h>
void func(void);
void func(){
	int i,n;
	printf("�������񐔁H"); scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("����ɂ��́I%d ���\n",i+1);
	}
}
void main (void){
	int i,n=3;
for(i=0;i<n;i++){
	printf("Hello �֐��Ăяo��	%d�@���\n",i+1);
	func();
}
}
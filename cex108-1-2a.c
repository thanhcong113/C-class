#include<stdio.h>
void func(void);
int gn[]={5,12,8,21,9};
void func(){
int i;
	for(i=0;i<5;i++){
		gn[i]=i;
	}
}
void main(void){
	int i;
	for(i=0;i<5;i++)printf("%d ",gn[i]);
	printf("\n");
	
	func();
	for(i=0;i<5;i++)printf("%d ",gn[i]);
	printf("\n");
}
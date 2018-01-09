#include<stdio.h>
void func(void);

void func(){
	static int n=0;
	n++;
	printf("%d‰ñ–Ú\n",n);
}
void main(void){
	int n;
	for(n=0;n<5;n++){
		func();
	}
}
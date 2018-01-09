#include<stdio.h>
void func(void);
void func(){
	int i;
	for(i=0;i<5;i++){
	printf("‚±‚ñ‚É‚¿‚ÍI%d ‰ñ–Ú\n",i+1);
	}
}
void main (void){
	int i;
for(i=0;i<2;i++){
	printf("Hello ŠÖ”ŒÄ‚Ño‚·	%d@‰ñ–Ú\n",i+1);
	func();
}
}
#include<stdio.h>
void func(void);
char gs[50]="Hello";
void func(){
	char s[]="Goobye";
	int i;
	for(i=0;s[i]!='\0';i++){
		gs[i]=s[i];
	}
	gs[i]='\0';
}
void main(void){
	printf("%s\n",gs);
	func();
	printf("%s\n",gs);
	
}
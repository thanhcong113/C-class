#include<stdio.h>
void hello(int,int);
void hello(int x,int y){
	int max =x;
	if(max<y)
	  max=y;
		printf("%d �Ɓ@%d ���ׂāA�傫������%d�ł��B\n",x,y,max);
	
}

void main(){
	hello(40,83);
	hello(200,23);
	hello(-45,30);
}

#include<stdio.h>
void func(int *,int*);
void func(int *px,int*py){
int tmp;
tmp=*px;
*px=*py;
*py=tmp;
}

void main(){
	int x,y;
	x=8;
	y=15;
	
	printf("x= %d  y=%d\n",x,y);
	func(&x,&y);
  printf("x= %d  y=%d\n",x,y);
}
	
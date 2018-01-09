#include<stdio.h>
void main(){
	int x=10;
	int *p;
	p=&x;
	printf("x=%d, &x = %p,p=%p,*p=%d\n",x,&x,p,*p);
	x=25;
	printf("x=%d, &x = %p,p=%p,*p=%d\n",x,&x,p,*p);
	*p=38;
	printf("x=%d, &x = %p,p=%p,*p=%d\n",x,&x,p,*p);
}
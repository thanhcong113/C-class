#include<stdio.h>
void func1(int *,int*);
void func2(int *,int*,int*);
void func1(int *px,int*py){
int tmp;
tmp=*px;
*px=*py;
*py=tmp;
}
void func2(int *pn1,int*pn2,int*pn3){
	if(*pn1>*pn2) func1(pn1,pn2);
	if(*pn1>*pn3) func1(pn1,pn3);
	if(*pn2>*pn3) func1(pn2,pn3);
}
void main(){
	int n1=10;
	int n2=9;
	int n3=8;
	
	printf("n1,n2,n3= %d,%d,%d\n",n1,n2,n3);
	func2(&n1,&n2,&n3);
  printf("n1,n2,n3= %d,%d,%d\n",n1,n2,n3);
}
	
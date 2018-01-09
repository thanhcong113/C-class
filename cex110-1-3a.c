#include<stdio.h>
double max(int);
double max(int x){
	double zei;
	zei=x*0.08;
	
	return zei;
}
void main(void){
	int p;
	double z;
	
	p=100;
	z=max(100);
	
	
	printf("–{‘Ì‰¿Ši=%d‰~FÁ”ïÅ= %.2f‰~\n",p,z);
	p=430;
	printf("–{‘Ì‰¿Ši=%d‰~FÁ”ïÅ= %.2f‰~\n",p,max(p));
}

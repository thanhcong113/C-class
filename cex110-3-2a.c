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
	do{
	
	printf("price?");
	scanf("%d",&p);
	if(p!=0){
	z=max(p);
	
	printf("–{‘Ì‰¿Ši=%d‰~FÁ”ïÅ= %.2f‰~\n",p,z);
	}}
	while(p!=0);
	//printf("–{‘Ì‰¿Ši=%d‰~FÁ”ïÅ= %.2f‰~\n",p,max(p));
}

#include<stdio.h>
void hello(int);
void hello(int n){
	double zei;
	zei=n*0.08;
		printf("�{�̉��i%d�~�F����ł�=%.2lf�~\n",n,zei);
	
}

void main(){
	int n;
	printf("price ?");
	scanf("%d",&n);
	do{
		printf("price ?");
	  scanf("%d",&n);
	  hello(n);
}while(n!=0) printf("\n");
	
}
	
	
	
	


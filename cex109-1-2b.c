#include<stdio.h>
void hello(int);
void hello(int n){
	double zei;
	zei=n*0.08;
		printf("�{�̉��i%d�~�F����ł�=%.2lf�~\n",n,zei);
	
}

void main(){
	hello(100);
	hello(40);
	//hello(91);
}

#include<stdio.h>
void hello(int);
void hello(int n){
	int i;
	for(i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
}
void main(){
	int n;
	n=10;
	
	hello(n);
	hello(n+5);
	hello(++n);
}

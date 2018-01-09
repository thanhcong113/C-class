#include<stdio.h>
void hello(int);
void hello(int n){
	int i;
	for(i=0;i<n;i++){
		printf("Hello World!\n");
	}
}
void main(){
	hello(4);
}

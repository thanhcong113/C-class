#include<stdio.h>
void hello(int);
void hello(int n){
	printf("�_��:%d:",n);
	if(n>=60){
		printf("���i\n");
	}else{
		printf("�s���i\n");
	}
}

void main(){
	hello(70);
	hello(53);
	hello(91);
}

#include<stdio.h>
void hello(int);
void hello(int n){
	printf("�_��:%d:",n);
	if(n%2==0){
		printf("%d �͋����ł�\n",n);
	}else{
		printf("%d �͊�ł�\n",n);
	}
}

void main(){
	hello(18);
	hello(7);
//	hello(91);
}

#include<stdio.h>
void hello(int);
void hello(int n){
	printf("点数:%d:",n);
	if(n%2==0){
		printf("%d は偶数です\n",n);
	}else{
		printf("%d は奇数です\n",n);
	}
}

void main(){
	hello(18);
	hello(7);
//	hello(91);
}

#include<stdio.h>
void hello(int);
void hello(int n){
	
	if(n%2==0){
		printf("%d は偶数です\n",n);
	}else{
		printf("%d は奇数です\n",n);
	}
}

void main(){
	int n;
	printf("n?");
	scanf("%d",&n);
	hello(n);
}

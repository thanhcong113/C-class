#include<stdio.h>
int eval(int);
int eval(int n){
	if(n>=60) return 1;
	return 0;
}
void main(){
	int n;
	n=80;
	if (eval(n)){
		printf("点数%d : 合格\n",n);
	}
		else {printf("点数%d : 不合格\n",n);
	}
	n=56;
	if (eval(n)){
		printf("点数%d : 合格\n",n);
	}
		else{ printf("点数%d : 不合格\n",n);
	}
}
	
	
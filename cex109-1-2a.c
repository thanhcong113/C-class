#include<stdio.h>
void hello(int);
void hello(int n){
	printf("ì_êî:%d:",n);
	if(n>=60){
		printf("çáäi\n");
	}else{
		printf("ïsçáäi\n");
	}
}

void main(){
	hello(70);
	hello(53);
	hello(91);
}

#include<stdio.h>
int g;
void main(){
	int x;
	
	printf("&x(auto) = %p\n",&x);
	printf("&g(グローバル) = %p\n",&g);
	
}
	
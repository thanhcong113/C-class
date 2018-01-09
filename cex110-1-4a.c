#include<stdio.h>
int max(int);
int max(int n){
	if(n>=60) return 1;
	return 0;
}
void main(void){
	int n=80;
	if(max(n)){
		printf("点数%d:合格\n",n);
	}
	else printf("点数%d:不合格\n",n);
	n=56;
	if(max(n)){
		printf("点数%d:合格\n",n);
	}
	else printf("点数%d:不合格\n",n);
	
}

#include<stdio.h>
int max(int);
int max(int n){
	if(n>=60) return 1;
	return 0;
}
void main(void){
	int n=80;
	if(max(n)){
		printf("�_��%d:���i\n",n);
	}
	else printf("�_��%d:�s���i\n",n);
	n=56;
	if(max(n)){
		printf("�_��%d:���i\n",n);
	}
	else printf("�_��%d:�s���i\n",n);
	
}

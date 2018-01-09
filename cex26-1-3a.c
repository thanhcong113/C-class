#include<stdio.h>
void main(void){
	int v[5];
	int i;
	for (i=0;i<5;i++){
		v[i]=5-i;
	}
	for (i=0;i<5;i++){
		printf("v[%d]=%d\n",i,v[i]);
	}
	
}
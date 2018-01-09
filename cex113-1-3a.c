#include<stdio.h>
void main(){
	int n[5];
	int i;
	int *p;
	for(i=0;i<5;i++)printf("%p ",&n[i]); 
	printf("\n");
		p=n;
			for(i=0;i<5;i++)printf("%p ",p++); 
	printf("\n");
		
}
	
#include<stdio.h>
void main(){
	double n[5];
	int i;
	for(i=0;i<5;i++)printf("%p ",&n[i]); 
	printf("\n");
		
			for(i=0;i<5;i++)printf("%p ",n+1); 
	printf("\n");
		
}
	
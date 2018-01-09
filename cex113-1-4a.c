#include<stdio.h>
void main(){
	int n[5]={14,25,8,50,4};
	int i;
	
	for(i=0;i<5;i++)printf("%p ",*(n+i)); 
	printf("\n");
	
		
}
	
#include<stdio.h>
void main(){
	int n[5];
	int i;
	*n=14;
	*(n+1)=25;
	*(n+2)=8;
	*(n+3)=50;
	*(n+4)=4;
	
	for(i=0;i<5;i++)printf("%d ",*(n+i)); 
	printf("\n");
	
		
}
	
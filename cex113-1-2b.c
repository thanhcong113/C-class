#include<stdio.h>
void main(){
	int n[5]={14,25,8,50,4};
	int *p;
	
	for(p=n;p<n+5;p++)printf("%d ",*(p)); 
	printf("\n");
	
		
}
	
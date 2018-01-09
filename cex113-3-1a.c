#include<stdio.h>
void main(){
	int n[5];
	
	int i,max=0;
	
	for(i=0;i<5;i++){
		printf("n[%d]?",i); scanf("%d",&n[i]);
		 //max=n[i];
		 if(n[i]>max) max=n[i];
}
printf("Å‘å’l%d",max);
}
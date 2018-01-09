#include<stdio.h>
void main(void){
	int a[100],i,j,k=0;
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			a[k++]=i*j;
		}
	}
	printf("a[]\n");
		for (i=0;i<100;i++){
		
		printf(" %3d",a[i]);
		if(i%10==9) 
		printf("\n");
	}
	
}
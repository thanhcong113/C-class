#include<stdio.h>
void main(void){
	int i,j,no=33,width=5,len,rem;
	len=no/width;
	rem=no%width;
	for (i=0;i<len;i++){
		
		for (j=0;j<width;j++){
		printf("*");
	}
	printf("\n");
	}
	for (i=0;i<rem;i++)printf("*");
	printf("\n");
}

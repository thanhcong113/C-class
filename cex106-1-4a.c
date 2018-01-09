#include<stdio.h>
#define num 10
void main(void){
	int data[num]={0,1,4,6,9,7,8,5,2,1};
	
	int i,j;
	
	for(i=0;i<num;i++){
		printf("%d :",i);
		for(j=0;j<data[i];j++){
			printf("*");
		}
		printf("\n");
	}
}
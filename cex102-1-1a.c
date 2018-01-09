#include<stdio.h>
#define size 5

void main(){
	int n[]={5,12,8,21,9};
	int i;
	int sum=0;
	
	for(i=0;i<size;i++){
		sum+=n[i];
		//printf("%d ",n[i]);
	}
	printf("sum=%d ",sum);
	printf("\n");
}

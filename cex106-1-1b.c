#include<stdio.h>
#define num 10
void main(void){
	int data[num]={0,1,4,6,9,7,8,5,2,1};
	int max=0;
	int i,j;
	
	for(i=0;i<num;i++){
		if(max < data[i]) max = data[i];
	}
	
	for(i= max;i>=0;i--){
		for(j=0;j<num;j++){
			if(data[j]>=i){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	for(j=0;j<num;j++)printf("--");
	printf("\n");
	for(j=0;j<num;j++)printf("%2d ",j);
	printf("\n");
}
#include<stdio.h>
#define length 100
#define num 5

void main(void){
	char data[num][length];
	int i,j;
	for(i=0;i<num;i++){
		printf("[%d]",i);scanf("%s",data[i]);
	}
	
	
	
	for(j=0;j<num;j++){
		printf("%s\n",data[j]);
	}
}
		
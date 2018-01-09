#include<stdio.h>
void main(void){
	int i;
	for(i=0;i<=5;i++){
		printf("%d",i);
	}
	printf("\n");
	//---------------------------
	i=0;
	do{
		printf("%d",i);
		i++;
	}
	while (i<=5);
	printf("\n");
}
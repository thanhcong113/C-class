#include<stdio.h>
void main(void){
	int no=25;
	int i;
	for (i=0;i<no;i++){
		printf("%d",i%10);
	}
	printf("\n");
}
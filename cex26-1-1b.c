#include<stdio.h>
void main(void){
	int no;
	printf("no=");
	scanf("%d",&no);
	if(no>0){
		int i;
	for (i=0;i<no;i++){
		printf("*");
		if(i%5==4)
		printf("\n");
	}
	printf("\n");
}
}
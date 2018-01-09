#include<stdio.h>
#define col 2
#define row 5
void main(void){
	int sales[5][2]={{79,55},{89,65},{76,85},{55,78},{82,74}};
	int sum[5];
	int i,j;
	for(i=0;i<5;i++){
		sum[i]=0;
		for(j=0;j<2;j++){ sum[i] += sales[i][j];
		}
	}
	printf(" ”Ô†b‡Œv	\n");
	printf("==============\n");
	
	for(i=0;i<5;i++){ printf("No.%-2d",i);
	printf("| %4d",sum[i]);
	printf("\n");
}
}

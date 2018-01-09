#include<stdio.h>
#define col 6
#define row 3
void main(void){
	int sales[row][col]={{10,4,18,43,32,55},{20,50,21,90,32,65},{32,45,98,32,78,85}};
	int sum[row];
	int i,j;
	for(i=0;i<row;i++){
		sum[i]=0;
		for(j=0;j<row;j++) sum[i] += sales[i][j];
		//avg[i]=avg[i]/row;
	}
	printf("     ¤•ib‡Œv	\n");
	printf("====================\n");
	//printf("•½‹Ï");
	for(i=0;i<row;i++){ printf("No.%-2d",i);
	printf("| %4d",sum[i]);
	printf("\n");
}
}

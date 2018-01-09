#include<stdio.h>
#define col 2
#define row 5
void main(void){
	int score[row][col]={{79,55},{89,65},{76,85},{55,78},{82,74}};
	int avg[col];
	int i,j;
	for(i=0;i<col;i++){
		avg[i]=0;
		for(j=0;j<row;j++) avg[i] += score[j][i];
		avg[i]=avg[i]/row;
	}
	printf("     “ú–{Œê@CŒ¾Œê\n");
	printf("====================\n");
	printf("•½‹Ï");
	for(i=0;i<col;i++) printf("%6d",avg[i]);
	printf("\n");
}

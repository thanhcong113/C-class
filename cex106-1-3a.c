#include<stdio.h>
#define col 2
#define row 2
void main(void){
	int t[row][col];
	
	int i,j;
	for(i=0;i<row;i++){

		for(j=0;j<col;j++){ t[j][i]=i&&j;
	}
		
	}
	printf("  |");
	for(j=0;j<col;j++){ 
	if(j) printf(" T ");
	else printf(" F ");
	}
	printf("====================\n");
	
	for(i=0;i<row;i++) {
		if(i) printf("T |");
	else printf("F |");
	for(j=0;j<col;j++){ 
	if(t[i][j]) printf(" T ");
	else printf(" F ");
	}
	printf("\n");
}
}

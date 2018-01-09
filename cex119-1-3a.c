#include<stdio.h>

#define col 10
#define row 3

void main(){
	char str[][col]={"apple","orange","melon"};
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("%c ",str[i][j]);
}
printf("\n");
for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("%d ",str[i][j]);
}
printf("\n");

}
}
}
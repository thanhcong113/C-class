#include<stdio.h>

#define col 10
#define row 3

void main(){
	char str[][col]={"apple","orange","melon"};
	int i,j;
	for(i=0;i<row;i++){
		printf("%p %s\n",str[i],str[i]);
	}
	for(i=0;i<row;i++){
		printf("%p %s\n",str +i,str +i);
	}
}
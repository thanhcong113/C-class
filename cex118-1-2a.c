#include<stdio.h>

//#define col 10
#define num 3

void main(){
	char *sp[]={"apple","orange","melon"};
	int i;
	for(i=0;i<num;i++){
		printf("%p %s\n",sp[i],sp[i]);
}
}
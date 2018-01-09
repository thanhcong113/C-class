#include<stdio.h>
#define size 5
void main(){
int n[size];
int i;
for(i=0;i<size;i++){
	n[i]=i;
}
for(i=0;i<size;i++){
	printf("%d ",n[i]);
}
printf("\n");
}

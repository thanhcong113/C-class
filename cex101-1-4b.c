#include<stdio.h>
#define size 5
void main(){
int n[size];
int i;
for(i=0;i<5;i++){
	printf("n[%d]?",i); scanf("%d",&n[i]);
}
for(i=0;i<5;i++){
	printf("%d ",n[i]);
}
printf("\n");
}

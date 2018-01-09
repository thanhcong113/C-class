#include<stdio.h>
#define size 5
void main(){

int buff[size]={0};
int i;
for(i=0;i<size;i++){
	printf("n[%d] ",i);scanf("%d",&buff[i]);
}
printf("buff= ");
for(i=4;i>=0;i--) printf("%d ",buff[i]);
printf("\n");

}

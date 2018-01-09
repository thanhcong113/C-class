#include<stdio.h>
#define size 5
void main(){
int n[size]={5,12,8,21,9};
int buff[size]={0};
int i;
printf("buff= ");
for(i=0;i<size;i++) printf("%d ",buff[i]);
printf("\n");
for(i=0;i<size;i++){
	buff[i]=n[i];
}
printf("buff= ");
for(i=0;i<size;i++) printf("%d ",buff[i]);
printf("\n");

}

#include<stdio.h>
#define size 5
void main(){
double n[5];
int i;
for(i=0;i<5;i++){
	printf("n[%d]?",i); scanf("%lf",&n[i]);
}
for(i=0;i<5;i++){
	printf("%7.2f ",n[i]);
}
printf("\n");
}

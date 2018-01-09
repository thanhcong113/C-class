#include<stdio.h>
#define size 5
void main(){
int n[size];
double avg=0;
int i;
for(i=0;i<size;i++){
	printf("n[%d] ",i);scanf("%d",&n[i]);
}
for(i=0;i<size;i++) {
	avg += n[i];
}

avg = avg / size;
 printf("avg= %.2lf ",avg);
printf("\n");

}

#include<stdio.h>
void main(void){
	int n,i=0;
	int d[]={0,1,2,3,4,5,6,7,8,9,0};
	do{
		n=d[i++];
    printf("%3d",n);
}
while(n!=0);
printf("\n");

printf("Program end n =%d",n);
}

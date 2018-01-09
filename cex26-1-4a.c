#include<stdio.h>
void main(void){
	int a[]={17,23,36,0,0};
	int i,b[5];
	for (i=0;i<5;i++){
		b[i]=a[4-i];
	}
	printf("   i   a   b\n");
	printf("--------------\n");
	for(i=0;i<5;i++){
		printf("%4d%4d%4d\n",i,a[i],b[i]);
	}
	
}
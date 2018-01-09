#include<stdio.h>
#include<conio.h>
void main(void){
	int a[]={'C','A','P','S'};
	int b[100];
	int i=0;
	do{
		b[i]=a[i]+32;
		printf("%c",b[i]);
		i=i+1;
	
	}
	while(a[i]!=0);
	printf("\n");
}
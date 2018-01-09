#include<stdio.h>
void main(void){
	int i;
	char a;
	printf("input=");
	scanf("%c",&a);
	for (i=0;i<=9;i++){
		
		printf("%c",a++);
	}

}
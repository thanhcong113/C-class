#include<stdio.h>
#include<conio.h>
void main(void){
	int i;
	int count;
	count=11;
	do{
		printf(" do while count=%d\n",count++);
	}
	while(count<=10);
	printf(" do while quit\n");
}
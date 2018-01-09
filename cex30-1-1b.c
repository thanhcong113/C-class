#include<stdio.h>
void main(void){
	int a=0;
	int count=0;
	do{
		printf("** do-while**\n");
    count++;
}while(a!=0);
printf("do-while count=%d\n",count);
//-----------------------------
a=0;
count=0;
while(a!=0){
	printf("** while**\n");
    count++;
}
	printf("do-while count=%d\n",count);
}
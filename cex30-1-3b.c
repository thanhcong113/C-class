#include<stdio.h>
void main(void){
	int n,total=0;
	//int total=0;
	do{
		scanf("%d",&n);
    total+=n;
}
while(n>-99);
printf("total =%d\n",total);
}

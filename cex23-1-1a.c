#include <stdio.h>
void main(void){
	int sum=0;
	int i;
	for(i=1;i<=10;i++){
		sum += i;
		printf("%d,%d\n",i,sum);
	}
	printf("1+2+3.....+10=%d\n",sum);
}
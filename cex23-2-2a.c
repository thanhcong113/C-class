#include <stdio.h>
void main(void){
	int sum=0;
	int i=0,n=10;
	for(i=1;i<=n;i+=2){
		sum += i;
	}
	printf("sum=%d\n",sum);

}
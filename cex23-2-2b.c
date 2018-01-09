#include<stdio.h>
void main(void){
	int sum=0;
	int i=0,n=10,s;

	for(i=n;i>0;i--){
		sum += i;
		s=sum;
	printf("s[%d]=%d\n",i,sum);
}
printf("sum=%d\n",sum);
}
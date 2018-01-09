#include<stdio.h>
void main(void){
	int sum=0;
	int i=0,n=5,s;
if (i<=n){
	for(i=0;i<=n;i++){
		sum += i;
		s=sum;
	printf("s[%d]=%d\n",i,sum);
}
}
else printf("sum=%d\n",sum);
}
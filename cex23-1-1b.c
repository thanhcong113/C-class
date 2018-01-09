#include <stdio.h>
void main(void){
	int sum=0;
	int i,n,m;
	printf(" input n?"); scanf("%d",&n);
	printf(" input m?"); scanf("%d",&m);
	if(m>n){
	for(i=n;i<=m;i++){
		sum += i;
	}
	printf("sum %d to %d=%d\n",n,m,sum);
}
}
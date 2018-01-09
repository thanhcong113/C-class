#include<stdio.h>
void main(void)
{
	int sum=0,i,n,m;
	printf("n=");scanf("%d",&n);
	printf("m=");scanf("%d",&m);
	if(m>n){
		i=n;
	
	while(i<=m){
		sum+=i++;
}
printf("sum %d to %d=%d\n",n,m,sum);
}
}
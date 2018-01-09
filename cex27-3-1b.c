#include<stdio.h>
void main(void)
{
	int n,yes,no,i=0,m=0;
	printf("n=");scanf("%d",&n);
	while(n!=0){
		if(n==1) yes=i++;
		else no=m++;
		printf("n=");scanf("%d",&n);
	}
	
		printf("yes=%d no=%d",yes,no);
}
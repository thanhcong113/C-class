#include<stdio.h>
void main(void)
{
	int i,n,count;
	int d=256;
	i=1;
	printf("n=");scanf("%d",&n);
	while(d%n!=0){
		printf("n=");scanf("%d",&n);
		i++;
	}
	printf("%d ÇÕ %d ÇÃÇ‚Ç≠Ç∑Ç§Ç≈Ç∑ÅB\n",n,d);
	printf("%d Ç©Ç¢ÇﬂÇ…Ç„Ç§ÇËÇÂÇ≠",i);
}
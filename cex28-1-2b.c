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
	printf("%d �� %d �̂₭�����ł��B\n",n,d);
	printf("%d �����߂ɂイ��傭",i);
}
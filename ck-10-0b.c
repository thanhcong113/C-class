#include<stdio.h>
void main(void)
{
	int a[5];
	int sum=0,i=0;
	printf("No1:");scanf("%d",&a[i]);
	sum+=a[i++];
	printf("No2:");scanf("%d",&a[i]);
	sum+=a[i++];
	printf("No3:");scanf("%d",&a[i]);
	sum+=a[i++];
	printf("No4:");scanf("%d",&a[i]);
	sum+=a[i++];
	printf("No5:");scanf("%d",&a[i]);
	sum+=a[i++];
	printf("sum=%d\n",sum);
}
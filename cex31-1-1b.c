#include<stdio.h>
void main(void){
	int a[100];
	int i,sum=0,n=0;
	do{
		printf("No .%d number=",n);
		scanf("%d",&a[n]);
	}while(a[n++]!=0);
	for(i=0;i<n;i++){
		sum+=a[i];
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("sum=%d\n",sum);
}
	
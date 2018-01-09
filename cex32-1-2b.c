#include<stdio.h>

void main(void){
	int i;
	int a[]={1,2,3,4,5,6,0,8,9,10};
	int sum=0;
	for(i=0;i<10;i++){
		if(a[i]<=0){
			printf(" NO %d is error\n",i);
			continue;
		}
		sum+=a[i];
	}
	
	 printf("sum=%d",sum);
}
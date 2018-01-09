#include<stdio.h>
void main(void){
	int n,i=0,sum=0;
	int a[]={2,4,6,8,10,12,14,-1,15};
	do{
		sum+=a[i];
    
}
while(a[i++]>=0);
n=i;
for(i=n;i>=n;i--){
	
printf("%4d",a[i]);
}
printf("\nsum =%d\n",sum);
}

#include<stdio.h>
void main(){
	int n[10]={14,25,8,50,4,9,32,78,54,45};
	int *p,*p1,*p2;
	int i,tmp;
	
	for(p=n;p<n+10;p++)printf("%d ",*(p)); 
	printf("\n");
	for(p1=n,p2=n+10-1;p1<n+10/2;p1++,p2--){
		tmp=*p1;
		*p1=*p2;
		*p2=tmp;
	}
	for(p=n;p<n+10;p++) printf("%d ",*(p)); 
	printf("\n");
	
		
}
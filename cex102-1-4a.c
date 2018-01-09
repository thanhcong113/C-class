#include<stdio.h>
 #define size 10
void main(){
	int n[]={14,25,8,50,4,9,32,78,54,45};
	int i;
	int tmp;
	for(i=0;i<size;i++)
		printf("%d ",n[i]);
		printf("\n");
	
	for(i=0;i<size/2;i++){
		tmp=n[i];
		n[i]=n[size-1-i];
		n[size-1-i]=tmp;
		
	}
	for(i=0;i<size;i++)
		printf("%d ",n[i]);
		printf("\n");
}

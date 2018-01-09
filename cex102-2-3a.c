#include<stdio.h>
 #define size 10
void main(){
	int n[]={48,78,93,73,58,55,84,65,84,51};
	int i;
	int count=0;
	for(i=0;i<size;i++)
		printf("%d ",n[i]);
		printf("\n");
	
	for(i=0;i<size;i++){
		if (n[i]>=60) count++;
	}
	printf("‡ŠiÒ = %d l ",count);
}

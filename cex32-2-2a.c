#include<stdio.h>
#define LIMIT -4
void main(void){
	int n,total=0;
	while(scanf("%d",&n),n!=0){
		if(n==LIMIT){
			printf("input ERROR!!\n");
			continue;
		}
		total+=n;
	}
	printf("TOTAL=%d\n",total);
}

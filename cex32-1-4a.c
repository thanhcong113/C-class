#include<stdio.h>
#define LIMIT 10000
void main(void){
	int n,total=0;
	while(scanf("%d",&n),n!=0){
		if(n>LIMIT){
			printf("ERROR!!%d\n",n);
			continue;
		}
		total+=n;
	}
	printf("TOTAL=%d\n",total);
}

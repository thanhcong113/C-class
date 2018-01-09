#include<stdio.h>
#define LIMIT -4
void main(void){
	int n,total=0;
	while(scanf("%d",&n)){
		if(n==-4){
			printf("ERROR!!stop\n");
			break;
		}
		total+=n;
	}
	printf("TOTAL=%d\n",total);
}

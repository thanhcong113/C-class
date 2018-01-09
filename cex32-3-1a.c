#include<stdio.h>

void main(void){
	double n,total=0;
	while(scanf("%lf",&n)){
		if(n>100||n<-100){
			printf("ERROR!!stop\n");
			break;
		}
		total+=n;
	}
	printf("TOTAL=%lf\n",total);
}

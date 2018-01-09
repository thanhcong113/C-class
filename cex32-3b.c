#include<stdio.h>

void main(void){
	double x,y=0,total=0;
	while(scanf("%lf",&x)){
		y=-x*x+6*x-8;
		if(y<0){
			printf("ERROR!!stop\n");
			break;
		}
		total+=y;
	}
	printf("TOTAL=%lf\n",total);
	
}

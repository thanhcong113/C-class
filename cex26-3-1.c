#include<stdio.h>
void main(void){
	int sum=0;
	int i,tax;
	int u[]={505,633,1254,189,755};
	for(i=0;i<5;i++){
		sum+=u[i];
	}
	tax=sum*0.08;
	printf("gokei=%d\n",sum);
printf("tax=%d\n",tax);
}
	
	
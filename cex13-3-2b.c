#include<stdio.h>
void main(void)
{
	int n;
	printf("people=");
	scanf("%d",&n);
	
	if (n==20){
		printf("money=%d\\ \n",3000*n);
	}
	else if (n%20==0){
		printf("money=%d\\ \n",3000*n);
	}
	else if (n<20){
		printf("money=%d\\ \n",5000*n);
	}
	else
	{
		printf("money=%d\\ \n",(3000*20+(n-20)*5000));
	}
}
	
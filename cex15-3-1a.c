#include<stdio.h>
void main(void)
{
	int n,m,k;
	printf("km=");
	scanf("%d",&n);
	printf("people=");
	scanf("%d",&m);
	if (m<=10){
	
	if (n<50)
	{
		k=m*300;
	}
	else if (n>50&&n<100){
		k=m*500;
	}
	else if (n>100&&n<500){
		k=m*700;
	}
	else{
		k=m*1000;
	}
	}
	else{
		if (n<50)
	{
		k=m*290;
	}
	else if (n>50&&n<100){
		k=m*480;
	}
	else if (n>100&&n<500){
		k=m*670;
	}
	else{
		k=m*960;
	}
	}
	printf("money=%d\n",k);
}

		
		
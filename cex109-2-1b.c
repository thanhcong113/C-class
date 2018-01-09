#include<stdio.h>
void hello(int);
void hello(int n){
	
	if(n%2==0){
		printf("%d ‚Í‹ô”‚Å‚·\n",n);
	}else{
		printf("%d ‚ÍŠï”‚Å‚·\n",n);
	}
}

void main(){
	int n;
	printf("n?");
	scanf("%d",&n);
	hello(n);
}

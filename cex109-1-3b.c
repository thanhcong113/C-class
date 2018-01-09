#include<stdio.h>
void hello(int);
void hello(int n){
	int i;
	int sum=0;
	for(i=0;i<=n;i++){
		sum+=i;
	}
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a%d ‚Å‚·B\n",n,sum);
	
}
void main(){
	hello(10);
}

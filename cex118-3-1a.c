#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	double a,b,ans;
	a = atof(avgv[1]);
	b = atof(avgv[3]);
	switch(argv[2][0]){
		case '+':
		ans = a + b;
		break;
		case '-':
		ans = a - b;
		break;
		case '*':
		ans = a * b;
		break;
		case '/':
		ans = a / b;
		break;
		default:
		printf("error\n");
		return;
	}
printf(" %s %s %s = %.2f\n",argv[1],argv[2],argv[3],ans);
}

#include<stdio.h>
void main(void)
{
int n=15;
int m=0;
if(n>50){
	m=1;
}
else if (n>20){
	m=2;
}
else
{m=3;
}
printf("m=%d\n",m);
}
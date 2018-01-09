#include<stdio.h>
void main(void)
{
int n=10;
int m=0;
if(n>50){
	m=1;
}
else if (n>20){
	m=2;
}
else if (n>10){
	m=3;
}
else{
n=0;
}
printf("m=%d\tn=%d\n",m,n);
}
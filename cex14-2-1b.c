#include<stdio.h>
void main(void)
{
int n=1259;

if(n%3==0){
	n=3;
}
else if (n%5==0){
	n=5;
}
else if (n%7==0){
	n=7;
}
else{
n=1259;
}
printf("n=%d\n",n);
}
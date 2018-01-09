#include <stdio.h>
void main(void)
{
int n=5, m,mb;
int i=10,j=20;
char c1='A';
m=c1+n;
mb=m;
printf("m=%c(decimal:%d hex:%x)\n",m,m,m);
m=m+i-j;
printf("%d=%d+%d-%d\n",m,mb,i,j);
}
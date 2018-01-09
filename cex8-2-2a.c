#include <stdio.h>
void main(void)
{
int n=5, m,mb;
int i=10,j=20;
char c1='A',c2;
c2=c1+n;
mb=c2;
printf("c2=%c(decimal:%d hex:%x)\n",mb,mb,mb);
c2=c2+i-j;
printf("%d=%d+%d-%d\n",c2,mb,i,j);
}
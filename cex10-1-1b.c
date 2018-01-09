#include<stdio.h>
void main(void)
{
	int i=0;
	int j=100;

	printf(" i=%d  j=%d\n",i++,j--);
	i++;
	j++;
printf(" i=%d  j=%d\n",i,j);
--i;
++j;
printf(" i=%d  j=%d\n",i,j);
printf(" i=%d  j=%d\n",-i,-j);
printf(" i=%d  j=%d\n",--i,--j);
}
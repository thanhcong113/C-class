#include <stdio.h>
void main(void)
{
	unsigned char a,b,c,d,n=0xFE;
	a=n&0x3;
	b=n|0x3;
	c=n^0x3;
	d=~n;
	printf("a=%02X\n",a);
	printf("b=%02X\n",b);
	printf("c=%02X\n",c);
	printf("d=%02X\n",d);
}
#include<stdio.h>
void main(void)
{
	int n,m;
	char a=85,b=255,c;
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",m);
	printf("n=%d m=%d\n",n++,m--);
	printf("n=%d m=%d\n",n,m);
	printf("n=%d m=%d\n",--n,++m);
	printf("n=%d m=%d\n",n,m);
	n+=2;
	m-=2;
	c=a & b;
	printf("a=%x b=%x\n",a,b);
	printf("%x&%x=%x(%d)\n",a,b,c,c);
	c=a|b;
	printf("a=%x b=%x\n",a,b);
	printf("%x &%x=%x(%d)\n",a,b,c,c);
}
	
#include<stdio.h>
void main(void)
{
	char n[]={'A','B','C','D','E'};
	char d;
  printf("%c %c %c %c %c\n",n[0],n[1],n[2],n[3],n[4]);
	d=n[1];
	n[1]=n[3];
	n[3]=d;
	printf("%c %c %c %c %c\n",n[0],n[1],n[2],n[3],n[4]);
}
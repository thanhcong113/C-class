#include<stdio.h>
void main(void)
{
	char n[]={'A','A','A','A','A'};
	char d=5;
  printf("%c %c %c %c %c\n",n[0],n[1],n[2],n[3],n[4]);
	
	n[1]=n[0]+1;
	n[2]=n[1]+2;
	n[3]=n[2]+3;
	n[4]=n[3]+4;
	printf("%c %c %c %c %c\n",n[0],n[1],n[2],n[3],n[4]);
}
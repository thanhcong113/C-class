#include<stdio.h>
void main(void)
{
	char n[]={'A','A','A','A','A'};
	int i=0;
  printf("%c %c %c %c %c\n",n[0],n[1],n[2],n[3],n[4]);
	
	n[i+1]=n[i]+1;
	n[i+2]=n[i+1]+1;
	n[i+3]=n[i+2]+1;
	n[i+4]=n[i+3]+1;
	printf("%c %c %c %c %c\n",n[0],n[1],n[2],n[3],n[4]);
}
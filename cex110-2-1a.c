#include<stdio.h>
int thisyear(void);
int thisyear()
{
	return 1;
}
void main(void){
	int y;
	y=thisyear();
	printf("私は、%d 年生です\n",y);
}

#include<stdio.h>
int thisyear(void);
int thisyear()
{
	return 2017;
}
void main(void){
	int y;
	y=thisyear();
	printf("今年は、%d 年です\n",y);
}

#include<stdio.h>
void main(void)
{
int ten;
char clas;
printf("input score=");
scanf("%d",&ten);
if (ten>=80)
{
	clas='A';
}
else if (ten>=70)
{clas='B';
}
else if (ten>=60)
{
	clas='C';
}
else
{
	clas='D';
}
printf(" your rank is \'%c\'.\n",clas);
}
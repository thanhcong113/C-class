#include <stdio.h>
void main(void)
{
int s;
scanf("%d",&s);
switch (s)
{
case 1:
    printf("c言語\n");
    break;
case 2: 
    printf("java言語\n");
    break;
default: 
    printf("その他\n");
    break;
}
}
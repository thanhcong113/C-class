#include <stdio.h>
void main(void)
{
char ch;
scanf("%c",&ch);
switch (ch)
{
case 'y':
    printf("yes\n");
    break;
case 'n': 
    printf("no\n");
    break;
default: 
    printf("input error\n");
    break;
}
}
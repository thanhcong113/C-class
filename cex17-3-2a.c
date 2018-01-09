#include <stdio.h>
void main(void)
{
char ch;
scanf("%c",&ch);
switch (ch)
{
case 'e':
case 'E': 
    printf("English\n");
    break;
case 'f':
case 'F':  
    printf("Frech\n");
    break;
case 'j':
case 'J':  
    printf("Japan\n");
    break;
case 'g':
case 'G':  
    printf("German\n");
    break;

default: 
    printf("Others\n");
    break;
}
}
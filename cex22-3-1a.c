#include<stdio.h>
void main(void)
{ char st[100];
printf("string=");scanf("%s",&st);
printf("%c %c %c %c %c\n",st[0],st[1],st[2],st[3],st[4]);
printf("%2x %2x %2x %2x %2x\n",st[0],st[1],st[2],st[3],st[4]);
}

#include <stdio.h>
void main(void)
{
int m;
printf("number=");

scanf("%d",&m);
m=m%6+1;
switch (m)
{
	
case 1:

printf("おおあたり");
   break;
case 2:
case 3:

    printf("まあまあ");
   break;
case 4:
case 5:

    printf("そこそこ");
     break;
case 6:
    printf("ぶない");
     break;
default:
 break;
}
}
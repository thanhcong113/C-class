#include <stdio.h>
void main(void)
{
int n;
printf("number\n");

scanf("%d",&n);
switch (n)
{
	
case 1:
case 3:
printf("1000");
   break;
case 2:

    printf("2000");
   break;
case 4:
case 5:
case 7:
    printf("3000");
     break;
case 6:

    printf("4000");
     break;
default:
printf("5000");
 break;
}
}
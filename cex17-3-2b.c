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

printf("����������");
   break;
case 2:
case 3:

    printf("�܂��܂�");
   break;
case 4:
case 5:

    printf("��������");
     break;
case 6:
    printf("�ԂȂ�");
     break;
default:
 break;
}
}
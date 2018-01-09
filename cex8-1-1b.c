#include <stdio.h>
void main(void)
{
int data1=20, data2=10,data3=8;
int ans1,ans2,ans3,ans4;

ans1=data1+data2*data3;
ans2=data1*data2+data3;
ans3=(data1+data2)*data3;
ans4=data1+(data2-data3);
printf("%d+%d*%d=%d\n",data1,data2,data3,ans1);
printf("%d*%d+%d=%d\n",data1,data2,data3,ans2);
printf("(%d+%d)*%d=%d\n",data1,data2,data3,ans3);
printf("%d+(%d-%d)=%d\n",data1,data2,data3,ans4);
}

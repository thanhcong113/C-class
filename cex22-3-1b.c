#include<stdio.h>
void main(void)
{ 
int a[3];
int b[3];
int i=0;
printf("a[0] a[1] a[2]?");
scanf("%d %d %d",&a[0],&a[1],&a[2]);
printf("a[0]=%d a[1]=%d a[2]=%d\n",a[0],a[1],a[2]);
b[2-i]=a[i];
i++;
b[2-i]=a[i];
i++;
b[2-i]=a[i];
printf("b[0]=%d b[1]=%d b[2]=%d\n",b[0],b[1],b[2]);
}
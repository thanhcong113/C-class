#include<stdio.h>
void main(void)
{
char a[]="Program language C";
int count=0,j,i;
while(a[count]!=0){
	printf("%c",a[count]);
	count++;
}
printf("\n");
for (i=count-1;i>=0;i--){
	printf("%c",a[i]);
}
printf("\n");
}
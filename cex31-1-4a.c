#include<stdio.h>
void main(void){
char b[100];
int i=0;
printf("‚à‚¶‚ê‚Â=");
gets(b);
printf("%s\n",b);
do{
	printf("b[%d]=%d %x %c\n",i,b[i],b[i],b[i]);
}while(b[i++]!='\0');
}
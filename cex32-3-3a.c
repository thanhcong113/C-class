
#include<stdio.h>
void main(void){
char b[100];
//printf("‚à‚¶‚ê‚Â=");
gets(b);
b[0]='a';
b[3]='d';
printf("%s\n",b);
}

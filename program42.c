#include<stdio.h>
void main(void){
char b[100];
int i=0;

printf("もじれつ=");
gets(b);
b[4]='A';
printf("おきかえ＝%s\n",b);
}
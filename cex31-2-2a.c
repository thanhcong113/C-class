#include<stdio.h>
void main(void){
char b[100];
int i=0;

printf("もじれつ=");
gets(b);
while (b[i]!='d'){
	i++;
}
printf("もじ d は %d ばんめ",i+1);
}
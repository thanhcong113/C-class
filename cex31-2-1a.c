#include<stdio.h>
void main(void){
char b[100];
int i=0;
printf("もじれつ=");
gets(b);
while(b[i]!='\0'){
	i++;}
	
printf("もじのかず=%d",i);
}
#include<stdio.h>
void main(void){
char b[100];
int i=0;

printf("�������=");
gets(b);
while (b[i]!='d'){
	i++;
}
printf("���� d �� %d �΂��",i+1);
}
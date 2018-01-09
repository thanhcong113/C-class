#include<stdio.h>
void main(void){
char a;
printf(" input = ");
scanf("%c",&a);
switch(a){
	case 'E':
	 printf("English");
	 break;
	 case 'F':
	 printf("France");
	 break;
	 case 'J':
	 printf("Japanese");
	 break;
	 case 'G':
	 printf("German");
	 break;
	 default : printf("Others\n");
	 break;
}
}
	 
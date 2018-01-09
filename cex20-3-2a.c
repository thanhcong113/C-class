#include <stdio.h>
void main(void){
	char no;
	printf("no=");
	scanf("%c",&no);
	switch(no){
	case 'R':
	case 'r': printf("Red"); break;
	case 'G':
	case 'g': printf("Green"); break;
	case 'b':
	case 'B': printf("Blue"); break;
	default : printf("******");break;
	}
}
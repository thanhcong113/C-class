#include <stdio.h>
void main(void){
	int no;
	printf("no=");
	scanf("%d",&no);
	if (no%2==0)printf("22");
	else if (no%3==0)printf("33");
	else if (no%2==0&&no%3==0)printf("2233");
	else printf("error");
}
#include <stdio.h>
void main(void){
	int a,b,c;
	printf("a=");
	scanf("%c",&a);
	printf("b=");
	scanf("%c",&b);
	printf("c=");
	scanf("%c",&c);
	if (a>b&&b>c) printf("%c%c%c",a,b,c);
	else if (b>a&&a>c)printf("%c%c%c",b,a,c);
	else if (b>c&&c>a)printf("%c%c%c",b,c,a);
	else if (a>c&&c>b)printf("%c%c%c",a,c,b);
	else if (c>a&&a>b)printf("%c%c%c",c,a,b);
	else printf("%c%c%c",c,b,a);
	}

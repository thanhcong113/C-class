#include <stdio.h>
void main(void){
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	if (a>b&&b>c) printf("%d",a);
	else if (b>a&&a>c)printf("%d",b);
	else if (b>c&&c>a)printf("%d",b);
	else if (a>c&&c>b)printf("%d",a);
	else if (c>a&&a>b)printf("%d",c);
	else printf("%d",c);
}
	
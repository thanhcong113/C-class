#include <stdio.h>
void main(void)
{
	int n;
	scanf("%d",&n);
	switch(n){
		default:
		printf("入力エラー\n");
		break;
		case 1:
		printf("ok\n");
		break;
		case 2:
		printf("no\n");
		break;
	}
}

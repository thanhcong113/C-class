#include <stdio.h>
void main(void)
{
	int no,jug;
	printf("input number");
		scanf("%d",&no);
		jug=no%3;
		if (jug==0) printf("����\n");
		else if (jug==1) printf("���傫\n");
		else printf("�ہ[\n");
}
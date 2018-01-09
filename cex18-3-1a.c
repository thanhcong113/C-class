#include <stdio.h>
void main(void)
{
	int s;
	printf("s=");
	scanf("%d",&s);
	switch(s){
		default:{
		printf("入力エラー\n");
		break;
		}
		case 1:
		{
		printf("ハンバーガー");
		break;
	}
		case 2:		{
		printf("ポテトフライ");
		break;
		}
		case 3:
		{
		printf("バニラシェーク");
		break;
		}
		case 4:
		{
		printf("コーラ");
		break;
		}
		case 5:
		{
		printf("ハンバーガーセット");
		break;
		}
	}
}
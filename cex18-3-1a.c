#include <stdio.h>
void main(void)
{
	int s;
	printf("s=");
	scanf("%d",&s);
	switch(s){
		default:{
		printf("���̓G���[\n");
		break;
		}
		case 1:
		{
		printf("�n���o�[�K�[");
		break;
	}
		case 2:		{
		printf("�|�e�g�t���C");
		break;
		}
		case 3:
		{
		printf("�o�j���V�F�[�N");
		break;
		}
		case 4:
		{
		printf("�R�[��");
		break;
		}
		case 5:
		{
		printf("�n���o�[�K�[�Z�b�g");
		break;
		}
	}
}
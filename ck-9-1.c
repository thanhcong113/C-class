#include <stdio.h>
void main(void)
{
	int cmp=5,you;
	printf("your hand(0:��/2:�`���L/5:�p�[)=");
	scanf("%d",&you);
	if((you!=0)&&(you!=2)&&(you!=5))
	{
		printf("input error\n");
	}
	else{
		switch(cmp){
			case 0: printf("com:�O�[\n");
			break;
			case 2: printf("com:�`���L\n");
			break;
			case 5: printf("com:�p�[\n");
			break;
			default : break;
		}
		switch ( you ){
			case 0: printf("you:�O�[\n");
			break;
			case 2: printf("you:�`���L\n");
			break;
			case 5: printf("you:�p�[\n");
			break;
			default: break;
		}
		if (cmp==you){
			printf("�Ђ��킯\n");
		}
		else {
			if(cmp==0){
				if (you==2){
				printf("you ����\n");
				}
				else {
					printf("you ����\n");
				}
			}else if (cmp==2){
				if (you==0){
					printf("you ����\n");
				}
				else{
					printf("you ����\n");
				}
			} else {
				if(you==0){
					printf("you ����\n");
				}else{
					printf("you ����\n");
				}
			}
		}
	}
}
					
				
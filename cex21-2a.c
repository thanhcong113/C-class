#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(void)
{
	int cmp,you,temp;
	srand((unsigned)time(NULL));
	temp = rand()%3;
	if (temp==0){
		cmp=0;
	}
	else if (temp==1){
		cmp=2;
	}
	else{		cmp=5;}
	printf("your hand (0:�O�[/2:�`���L/5:�p-)=");
	scanf("%d",&you);
	if ((you!=0)&&(you!=2)&&(you!=5)){
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
		switch(cmp){
			case 0:
			{
			switch(you){
			case 0:printf("�Ђ��킯\n");
			break;
		  case 2:printf("you ����\n");
			break;
			case 5:printf("you ����\n");
			break;
			}
			break;
			}
			case 2:{
				switch(you){
				case 0:printf("you ����\n");
				break;
				case 2:printf("�Ђ��킯\n");
				break;
				case 5:printf("you ����\n");
				break;
				}
				break;
			case 5:{
				switch(you){
				case 0:printf("you ����\n");
				break;
				case 2:printf("you ����\n");
				break;
				case 5:printf("�Ђ��킯\n");
				break;
			}
			break;
		}
		
	}
}
}
}
					
				
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
	printf("your hand (0:グー/2:チョキ/5:パ-)=");
	scanf("%d",&you);
	if ((you!=0)&&(you!=2)&&(you!=5)){
		printf("input error\n");
}
else{
	
				
	switch(cmp){
			case 0: printf("com:グー\n");
			break;
			case 2: printf("com:チョキ\n");
			break;
			case 5: printf("com:パー\n");
			break;
			default : break;
		}
		switch ( you ){
			case 0: printf("you:グー\n");
			break;
			case 2: printf("you:チョキ\n");
			break;
			case 5: printf("you:パー\n");
			break;
			default: break;
		}
		if (cmp==you){
			printf("ひきわけ\n");
		}
		else {
			if(cmp==0){
				if (you==2){
				printf("you 負け\n");
				}
				else {
					printf("you 勝ち\n");
				}
			}else if (cmp==2){
				if (you==0){
					printf("you 勝ち\n");
				}
				else{
					printf("you 負け\n");
				}
			} else {
				if(you==0){
					printf("you 負け\n");
				}else{
					printf("you 勝ち\n");
				}
			}
		}
	}
}
					
				
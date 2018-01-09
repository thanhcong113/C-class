#include<stdio.h>
void main(void){
	
	char i;
	
		for (i=32;i<127;i++){
			if(i%16==0) printf("\n");
	printf("%c",i);
	}
	printf("\n");
}

#include<stdio.h>
void main (){
	
	char str[100];
	
	int i=0;
	printf("?");
	scanf("%s",&str);
	while(str[i]!='\0'){
		i++;
	}
	printf("文字列 %s の長さは %d　です",str,i);
}

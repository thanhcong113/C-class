#include<stdio.h>
void main (){
	
	char str[100];
	
	int i=0;
	printf("?");
	scanf("%s",&str);
	while(str[i]!='\0'){
		i++;
	}
	printf("������ %s �̒����� %d�@�ł�",str,i);
}

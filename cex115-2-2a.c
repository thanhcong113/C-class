#include<stdio.h>
void main (){
	
	char str[100];
	
	int i=0;
	int a;
	printf("?");
	scanf("%s",&str);	
	while(str[i]!='\0'){
		//i++;
		if (str[i]=='a') printf("文字列 'a' はありました\n");
		i++;
	}
	while(str[i]!='\0'){
		//i++;
		if (str[i]!='a') printf("文字列 'a' はありません\n");
		i++;
	}
	
	}
}
#include<stdio.h>
void main (){
	
	char str[100];
	
	int i=0;
	printf("?");
	scanf("%s",&str);
	while(str[i]!='\0'){
		i++;
	}
	printf("•¶š—ñ %s ‚Ì’·‚³‚Í %d@‚Å‚·",str,i);
}

#include<stdio.h>
void main (){
	
	char str[100];
	
	int i=0;
	int a;
	printf("?");
	scanf("%s",&str);	
	while(str[i]!='\0'){
		//i++;
		if (str[i]=='a') printf("•¶Žš—ñ 'a' ‚Í‚ ‚è‚Ü‚µ‚½\n");
		i++;
	}
	while(str[i]!='\0'){
		//i++;
		if (str[i]!='a') printf("•¶Žš—ñ 'a' ‚Í‚ ‚è‚Ü‚¹‚ñ\n");
		i++;
	}
	
	}
}
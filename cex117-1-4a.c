#include<stdio.h>
//#define BUF 100
#include<string.h>
void main(){
	char s[]="ABCDEF";
	char *p;
	int n;
	p="ABCDEE";printf("strcmp(\"%s\",\"%s\")= %d\n",s,p,strcmp(s,p));
	p="ABCDEF";printf("strcmp(\"%s\",\"%s\")= %d\n",s,p,strcmp(s,p));
	p="ABCDEG";printf("strcmp(\"%s\",\"%s\")= %d\n",s,p,strcmp(s,p));
	p="ABCZ";
	n=3;printf("strncmp(\"%s\",\"%s\",%d)= %d\n",s,p,n,strncmp(s,p,n));
	n=4;printf("strncmp(\"%s\",\"%s\",%d)= %d\n",s,p,n,strncmp(s,p,n));
	
	p="ABC";
	n=3;printf("strncmp(\"%s\",\"%s\",%d)= %d\n",s,p,n,strncmp(s,p,n));
	n=4;printf("strncmp(\"%s\",\"%s\",%d)= %d\n",s,p,n,strncmp(s,p,n));
}
	
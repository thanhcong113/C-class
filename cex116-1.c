#include <stdio.h>
#include <stdlib.h>


void str_copy(char*,char*);
void str_copy(char*d,char*s){
	while(*s){
		*d++=*s++;
	}
	*d='\0';
}
int str_to_int(char*);
int str_to_int(char *p){
	int sign=1;
	int x=0;
	if(*p=='-'){
		sign=-1;
		p++;
	}
else if (*p=='+'){
	p++;
}
while(*p>='0' && *p<='9'){
	x=x*10+(*p-'0');
	p++;
}
return sign*x;
}
void main(void){
	char a[10]={"abcde"};
	char b[10];
	printf("a=%s\n",a);//;scanf("%s",a);
    str_copy(b,a);
    printf("b=%s",b);
}

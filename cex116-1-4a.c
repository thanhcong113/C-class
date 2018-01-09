#include <stdio.h>
#include <stdlib.h>
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
	char a[]={"-8910"};
	int ans; 
	ans=str_to_int(a);
	printf("•¶Žš—ñ‚ðint‚É•ÏŠ·=%d\n",ans);
}
	
#include<stdio.h>
void main(void)
{
char a='.';
if (a<'A'){
	printf("not alphabet\n");
}
else if(a<='Z'){
	printf("alphabet capital\n");
}
else if (a<='z'){
	printf("alphabet small\n");
}
else{
	printf("Not alphabet\n");
}
}
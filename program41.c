#include<stdio.h>
void main(void){
char b[100];
int i=0;

printf("‚à‚¶‚ê‚Â=");
gets(b);
while (b[i]!='d'){
	i++;
}
printf("‚à‚¶ d ‚Í %d ‚Î‚ñ‚ß",i+1);
}
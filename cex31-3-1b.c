#include<stdio.h>
void main(void){
char c;
int n=0;
//printf(" input = ");
//scanf("%c",&c);

do{
	printf(" input =  ");
scanf("%c",&c);
if(c=='E')printf("English\n");
else if (c=='F')printf("France\n");
else if (c=='J')printf("Japanese\n");
else if (c=='G')printf("German\n");
else n=1;





scanf("%c",&c);
}
while(n==0);
}
	
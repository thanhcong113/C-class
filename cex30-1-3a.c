#include<stdio.h>
void main(void){
	int retry,no;
	
	do{
		printf("No=");
    scanf("%d",&no);
    if(no==0) printf("Number 0\n");
		else if (no>0) printf(" Plus number\n");
		else printf("Minus Number\n");
		printf("More?(yes 0/no 9):"); scanf("%d",&retry);
		
}
while(retry==0);

}

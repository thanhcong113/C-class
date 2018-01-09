#include<stdio.h>
void main(void){
	char a[]="Programing Language C";
	int count=0;
	int i,j;
	do{
		printf("%c",a[count]);
		count++;
		
}
while(a[count]!='L');
printf("\n");
for(i=count-1;i>=0;i--){
	printf("%c",a[i]);

}
printf("\n");
}
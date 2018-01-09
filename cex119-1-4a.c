#include<stdio.h>
void main(){
	char str1[]="1234567890";
	char str2[20];
	char *pt1,*pt2;
	 pt1=&str1[0];
	 pt2=&str2[0];
	 while(*pt1!='\0') pt1++;
	 while (pt1>str1){
	 	pt1--;
		*pt2=*pt1;
		pt2++;
	 }
	 *pt2='\0';
	 printf("str1=%s\n",str1);
	 printf("str2=%s\n",str2);
}
#include<stdio.h>
 #define size 10
void main(){
	int n[]={88,78,93,73,58,75,64,65,84,81};
	int i;
	int a=0,b=0,c=0,d=0;
	for(i=0;i<10;i++)
		printf("%d ",n[i]);
		printf("\n");
	
	for(i=0;i<10;i++){
		if (n[i]>=90) a++;
		else if (n[i]>=80&&n[i]<90) b++;
		else if (n[i]>=60&&n[i]<80) c++;
		else d++;
	}
	printf("A:%d\nB:%d\nC:%d\nD:%d\n ",a,b,c,d);
}


#include<stdio.h>

//#define col 10
#define num 7
int get_num(char *);
int get_num(char *s){
	int n;
	printf("%s?",s);scanf("%d",&n);
	return n;
}
void main(){
	char *wdname[num]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	int m;
	while ((m=get_num("�j���ԍ�(1~7)"))>0&&m<=num){
		printf(" �j���ԍ�%d��%s \n",m,wdname[m-1]);
	}
}
	
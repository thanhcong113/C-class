#include<stdio.h>

//#define col 10
#define num 12
int get_num(char *);
int get_num(char *s){
	int n;
	printf("%s?",s);scanf("%d",&n);
	return n;
}
void main(){
	char *mname[num]={"Jan","Fre","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	int m;
	while ((m=get_num("ŒŽ(1~12)"))>0&&m<=num){
		printf("%d ŒŽ‚Í%s \n",m,mname[m-1]);
	}
}
	
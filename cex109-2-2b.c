#include<stdio.h>
int n[3];
void hello(int,int,int);
void hello(int x,int y,int z){
	
	int min=x;
	if(min > y)
		min=y;
	if(min > z)
		min =z;
	printf("%d %d %d を比べて　%d は　小さいです",x,y,z,min);
}

void main(){
	int x,y,z;
	printf(" 数次は　3個入力?");
	scanf("%d%d%d",&x,&y,&z);
	hello(x,y,z);
}

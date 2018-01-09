#include<stdio.h>
int n[3];
void hello(int,int,int);
void hello(int x,int y,int z){
	
	int min=x;
	if(min > y)
		min=y;
	if(min > z)
		min =z;
	printf("%d %d %d ‚ğ”ä‚×‚Ä@%d ‚Í@¬‚³‚¢‚Å‚·",x,y,z,min);
}

void main(){
	int x,y,z;
	printf(" ”Ÿ‚Í@3ŒÂ“ü—Í?");
	scanf("%d%d%d",&x,&y,&z);
	hello(x,y,z);
}

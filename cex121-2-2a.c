#include <stdio.h>
#include <string.h>
struct person{
	int num;
	char name[40];
	int jp,clang,excel;
	
};
void main(){
	struct person ben;
	 ben.num=17245;
	 strcpy(ben.name,"Lady Gaga");
	 ben.ip=82;
	 ben.clang=54;
	 ben.excel=72;
	 
	 printf("学籍番号=%s\n",ben.num);
	 printf("名前=%s\n",ben.name);
	 printf("日本語 = %d\n",ben.jp);
	 printf("C言語=%d\n",ben.clang);
	 printf("excel = %d\n",ben.excel);
	 printf("合計=%d\n",ben.jp+ben.clang+ben.excel);
}
	 
	 
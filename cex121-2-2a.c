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
	 
	 printf("�w�Дԍ�=%s\n",ben.num);
	 printf("���O=%s\n",ben.name);
	 printf("���{�� = %d\n",ben.jp);
	 printf("C����=%d\n",ben.clang);
	 printf("excel = %d\n",ben.excel);
	 printf("���v=%d\n",ben.jp+ben.clang+ben.excel);
}
	 
	 
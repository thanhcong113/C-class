#include<stdio.h>
void hello(double);
void hello(double t){
	printf("�����̋C����:%.1lf��:",t);
	if(t>=35.0){
		printf("�ҏ��Ђł�\n");
	}else if(t>=30.0) printf("�^�ē��ł�\n");
	else if(t>=25.0) printf("�ē��ł�\n");
	else if(t<0) printf("�^�~���ł�\n");
	
	else{
		printf("���ʓ��ł�\n");
	}
}

void main(){
	hello(34.5);
	hello(25);
	
}

#include<stdio.h>
void hello(double);
void hello(double t){
	printf("¡“ú‚Ì‹C‰·‚Í:%.1lfŽ:",t);
	if(t>=35.0){
		printf("–Ò‹‚Ð‚Å‚·\n");
	}else if(t>=30.0) printf("^‰Ä“ú‚Å‚·\n");
	else if(t>=25.0) printf("‰Ä“ú‚Å‚·\n");
	else if(t<0) printf("^“~“ú‚Å‚·\n");
	
	else{
		printf("•’Ê“ú‚Å‚·\n");
	}
}

void main(){
	hello(34.5);
	hello(25);
	
}

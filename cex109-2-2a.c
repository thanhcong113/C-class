#include<stdio.h>
void hello(double);
void hello(double t){
	printf("今日の気温は:%.1lf℃:",t);
	if(t>=35.0){
		printf("猛暑ひです\n");
	}else if(30.0<=t<35) printf("真夏日です\n");
	else if(25.0<=t<30.0) printf("夏日です\n");
	else if(t<0) printf("真冬日です\n");
	
	else{
		printf("普通日です\n");
	}
}

void main(){
	double t;
	printf("今日の気温?");
	scanf("%lf",&t);
	hello(t);
	
}

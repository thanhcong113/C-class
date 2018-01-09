void func(void);
void sig1();
void sig2();

void func1(){
	int i;
	printf("\n");
	for(i=0;i<15;i++){
	printf("=*=");
	}
	printf("\n\n");
}
void func2(){
	int i;
	printf("\n");
	for(i=0;i<15;i++){
	printf("---");
	}
	printf("\n\n");
}
void sig1(){
	func1();
	printf("\tグエン　タイン　コン\n");
	func1();
	
}
void sig2(){
	func2();
	printf("\tグエン　タイン　コン\n");
	func2();
	
}
void main(void){
	int n;
	printf("1 or 2？"); scanf("%d",&n);
	if (n==1){
		
	sig1();
	}
	else if ( n==2){
		sig2();
	}
	else printf("ngu ak");
}
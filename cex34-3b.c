void main(void){
	int n=0;
	char a[127],i;
	for (n=2;n<=7;n++){
			
		for (i=32;i<127;i++){
				if(i%16==0){
					 printf("\n");
					 //printf("%d|",n++);}
					 printf("%d|\n",n++);
					 
			printf("%c",i);
	}
	printf("\n");
}

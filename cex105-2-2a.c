#define col 2
#define row 3

void main(void){
	int data[row][col]={
		
		{0,1},
		{10,11},
		{20,21}};

int i,n;
	printf("”Ô†?");scanf("%d",&n);
	
	while(n>=0&&n<row){
			printf("%02d %02d\n",data[n][0],data[n][1]);
			printf("”Ô†?");scanf("%d",&n);
		}
		
}
#define size 5
void main(){
int n[10];
int i;
for(i=0;i<10;i++){
	printf("n[%d]?",i); scanf("%d",&n[i]);
}
for(i=9;i>=0;i--){
	printf("%d ",n[i]);
}
printf("\n");
}

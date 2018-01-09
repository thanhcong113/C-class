 #include<stdio.h>
 #define size 10
void main(){
	int n[]={3,18,5,6,11,9,19,7,8,4};
	int i;
	int count=0;
	for(i=0;i<size;i++)
		printf("%d ",n[i]);
		printf("\n");
	
	for(i=0;i<size;i++){
		if (n[i]>=10) count++;
	}
	printf("count=%d ",count);
}

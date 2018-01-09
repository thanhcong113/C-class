 #include<stdio.h>
#define size 100
void main(){
int n[size];
int i;
for(i=0;i<size;i++){
	n[i]=i*10;
}
for(i=0;i<size;i++){
	printf("%d ",n[i]);
}
printf("\n");
}


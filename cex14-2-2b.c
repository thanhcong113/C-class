#include<stdio.h>
void main(void)
{
	int k;
  int n,m;
	printf("number=");
  scanf("%d",&k);
	k=k*12-5;
	if (k>100)
{m=k%100;
n=k/100;
}
else if(k>=80){
	m=k%5;
	n=5;
}
else if (k>=70){
	m=k%4;
	n=4;
}
else if(k>=60){
	m=k%3;
	n=3;
}
else{
	m=0;
	
	n=0;
}
printf("m=%d\tn=%d\n",m,n);
}
	
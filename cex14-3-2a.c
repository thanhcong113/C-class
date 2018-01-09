#include<stdio.h>
void main(void)
{
  int m;
	printf("km=");
  scanf("%d",&m);
	if(m<50){
	printf("300\\\n");
}
else if (m>50&&m<100){
		printf("500\\\n");
}
else if (m>100&&m<500){
	printf("700\\\n");
}
else{
		printf("1000\\\n");
		
}
}
#include<stdio.h>
void main(void)
{
  int m;
	printf("month=");
  scanf("%d",&m);
	if(m>2&&m<6){
	printf("はる\n");
}
else if (m>5&&m<9){
		printf("まつ\n");
}
else if (m>9&&m<12){
	printf("あき\n");
}
else{
		printf("ふゆ\n");
		
}
}
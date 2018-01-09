#include<stdio.h>
void main(void)
{
  int m;
	printf("month=");
  scanf("%d",&m);
	if(m>2&&m<6){
	printf("‚Í‚é\n");
}
else if (m>5&&m<9){
		printf("‚Ü‚Â\n");
}
else if (m>9&&m<12){
	printf("‚ ‚«\n");
}
else{
		printf("‚Ó‚ä\n");
		
}
}
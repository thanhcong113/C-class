#include<stdio.h>
#define length 100
#define num 5

void main(void){
	char data[num][length]={
		"apple",
		"banana",
		"melon",
		"peach",
		"pear"};
	
	int i;
	for(i=0;i<num;i++){
		printf("%s\n",data[i]);
	}
}
		
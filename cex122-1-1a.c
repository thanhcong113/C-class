#include <stdio.h>
#include <string.h>
#define NUM 3
struct person{
	
	char name[40];
	int age;
	double height;
	double weight;
	
};
void main(){
	struct person data[NUM];
	 int i;
	 strcpy(data[0].name,"Benjamin Franklin");
	 data[0].age=54;
	 data[0].height=175.5;
	 data[0].weight=85.2;
	 
	 
	 
	 strcpy(data[1].name,"Donald J.Trump");
	 data[1].age=71;
	 data[1].height=188.2;
	 data[1].weight=107.5;
	 
	 strcpy(data[2].name,"Barack Obama");
	 data[2].age=56;
	 data[2].height=185.7;
	 data[2].weight=78.3;
	 
	 for(i=0;i<NUM;i++){
	 	printf("data[%d].name=%s\n",i,data[i].name);
		printf("data[%d].age=%d\n",i,data[i].age);
		printf("data[%d].height=%.1f\n",i,data[i].height);
		printf("data[%d].weight=%.1f\n",i,data[i].weight);
}
}
	 
	 
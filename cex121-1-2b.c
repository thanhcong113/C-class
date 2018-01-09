#include <stdio.h>
#include <string.h>
struct person{
	char name[40];
	int age;
	double height;
	double weight;
};
void main(){
	struct person ben;
	 
	 strcpy(ben.name,"Benjamin Franklin");
	 ben.age=54;
	 ben.height=175.5;
	 ben.weight=85.2;
	 
	 printf("name=%s\n",ben.name);
	 printf("age = %d\n",ben.age);
	 printf("height=%.1f\n",ben.height);
	 printf("weight = %.1f\n",ben.weight);
}
	 
	 